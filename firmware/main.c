#include "text_data.h"

#define DMA_SRC   (*(volatile int*)0x40000000)
#define DMA_DST   (*(volatile int*)0x40000004)
#define DMA_LEN   (*(volatile int*)0x40000008)
#define DMA_START (*(volatile int*)0x4000000C)

#define MAC_CTRL    (*(volatile int*)0x30000000) 
#define MAC_WGT     (*(volatile int*)0x30000004) 
#define MAC_ACT     (*(volatile int*)0x30000008) 
#define MAC_RES     (*(volatile int*)0x3000000C) 
#define MAC_OFFSET  (*(volatile int*)0x30000010) // NEW SRAM OFFSET
#define MAC_VLEN    (*(volatile int*)0x30000014)

#define QUANT_MULTIPLIER  1073741824
#define QUANT_SHIFT       31

int embedded_sentence[INPUT_SIZE] = {
    12,  4, -8, 19,  0, 22, 11,  5, -3, 14, 29,  1,  8, -6, 13,  4,
     0, 11, 15,  2, -9,  4,  7, 18, 22, -1,  0,  5, 14, 11, -3,  8,
    -5, 12,  6,  0, 19, 14, -2,  7, 11,  3,  8, -4, 12, 15,  0,  1,
     9, -2, 14, 22,  5,  8, -1,  0,  4, 11, 13, -2,  6,  9, 14,  3
};

char hidden_outputs[HIDDEN_NEURONS];
int final_logits[OUTPUT_CLASSES];

void dma_burst(void* src, void* dst, int len, int unpack_mode) {
    DMA_SRC = (int)src; DMA_DST = (int)dst; DMA_LEN = len;
    DMA_START = (unpack_mode << 1) | 1; 
}

void main() {
    MAC_CTRL = 16; // Reset internal pointers

    // =================================================================
    // STAGE 1: THE CACHE HIT (HIDDEN LAYER)
    // =================================================================
    MAC_VLEN = INPUT_SIZE; 
    
    // 1. Burst ALL 256 weights for the entire layer ONCE
    dma_burst((void*)layer1_weights, (void*)0x30000004, HIDDEN_NEURONS * INPUT_SIZE, 1);
    
    // 2. Burst the 64 sentence activations ONCE
    dma_burst(embedded_sentence, (void*)0x30000008, INPUT_SIZE, 0);

    // 3. Compute instantly using internal SRAM offsets
    for (int i = 0; i < HIDDEN_NEURONS; i++) {
        MAC_OFFSET = i * INPUT_SIZE; // Point hardware to the correct chunk of SRAM
        MAC_CTRL = 1; 
        while ((MAC_CTRL & 2) == 0); 
        
        long long scaled_sum = (((long long)MAC_RES + layer1_biases[i]) * QUANT_MULTIPLIER) >> QUANT_SHIFT;
        int q = (int)scaled_sum;
        if (q < 0) q = 0; if (q > 127) q = 127;
        hidden_outputs[i] = (char)q;
        
        MAC_CTRL = 2; // Ack
    }

    // =================================================================
    // STAGE 2: OUTPUT LAYER
    // =================================================================
    MAC_CTRL = 16; 
    MAC_VLEN = HIDDEN_NEURONS;

    // Cache the 8 output weights and the 4 new hidden outputs
    dma_burst((void*)layer2_weights, (void*)0x30000004, OUTPUT_CLASSES * HIDDEN_NEURONS, 1);
    dma_burst(hidden_outputs, (void*)0x30000008, HIDDEN_NEURONS, 1);

    for (int i = 0; i < OUTPUT_CLASSES; i++) {
        MAC_OFFSET = i * HIDDEN_NEURONS;
        MAC_CTRL = 1; 
        while ((MAC_CTRL & 2) == 0); 
        final_logits[i] = MAC_RES + layer2_biases[i];
        MAC_CTRL = 2; 
    }

    MAC_CTRL = 16;
    MAC_WGT = final_logits[0]; MAC_ACT = final_logits[1]; 
    asm volatile("ebreak");
}
