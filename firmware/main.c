#include "text_data.h"

// DMA Controller
#define DMA_SRC   (*(volatile int*)0x40000000)
#define DMA_DST   (*(volatile int*)0x40000004)
#define DMA_LEN   (*(volatile int*)0x40000008)
#define DMA_START (*(volatile int*)0x4000000C)

// MAC Vector Compute Engine
#define MAC_CTRL  (*(volatile int*)0x30000000) 
#define MAC_WGT   (*(volatile int*)0x30000004) 
#define MAC_ACT   (*(volatile int*)0x30000008) 
#define MAC_RES   (*(volatile int*)0x3000000C) 
#define MAC_VLEN  (*(volatile int*)0x30000014)

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

// DMA Helper: mode 0 = Standard 32-bit, mode 1 = 8-bit Unpack
void dma_burst(void* src, void* dst, int len, int unpack_mode) {
    DMA_SRC = (int)src;
    DMA_DST = (int)dst;
    DMA_LEN = len;
    DMA_START = (unpack_mode << 1) | 1; // Pack mode into Bit 1, Start into Bit 0
}

void main() {
    // =================================================================
    // STAGE 1: HIDDEN LAYER
    // =================================================================
    MAC_VLEN = INPUT_SIZE; 

    for (int i = 0; i < HIDDEN_NEURONS; i++) {
        MAC_CTRL = 16; // Reset FIFOs
        
        // DMA transfers the raw 8-bit char arrays directly! No CPU loops!
        dma_burst((void*)layer1_weights[i], (void*)0x30000004, INPUT_SIZE, 1);
        
        // Sentence is already a 32-bit int array, so use standard mode
        dma_burst(embedded_sentence, (void*)0x30000008, INPUT_SIZE, 0);
        
        MAC_CTRL = 1; // Start MAC
        while ((MAC_CTRL & 2) == 0); // Wait for DONE
        
        int raw_sum = MAC_RES + layer1_biases[i];
        long long scaled_sum = ((long long)raw_sum * QUANT_MULTIPLIER) >> QUANT_SHIFT;
        int quantized_8bit = (int)scaled_sum;
        
        if (quantized_8bit < 0) quantized_8bit = 0;
        if (quantized_8bit > 127) quantized_8bit = 127;
        
        hidden_outputs[i] = (char)quantized_8bit;
        MAC_CTRL = 2; // Ack
    }

    // =================================================================
    // STAGE 2: OUTPUT LAYER
    // =================================================================
    MAC_VLEN = HIDDEN_NEURONS;

    for (int i = 0; i < OUTPUT_CLASSES; i++) {
        MAC_CTRL = 16; 
        
        // Both weights and the hidden_outputs are 8-bit char arrays here!
        dma_burst((void*)layer2_weights[i], (void*)0x30000004, HIDDEN_NEURONS, 1);
        dma_burst(hidden_outputs, (void*)0x30000008, HIDDEN_NEURONS, 1);
        
        MAC_CTRL = 1; 
        while ((MAC_CTRL & 2) == 0); 
        
        final_logits[i] = MAC_RES + layer2_biases[i];
        MAC_CTRL = 2; 
    }

    MAC_WGT = final_logits[0]; 
    MAC_ACT = final_logits[1]; 

    asm volatile("ebreak");
}
