#include "text_data.h"

#define DMA_SRC   (*(volatile int*)0x40000000)
#define DMA_DST   (*(volatile int*)0x40000004)
#define DMA_LEN   (*(volatile int*)0x40000008)
#define DMA_START (*(volatile int*)0x4000000C)

#define MAC_CTRL    (*(volatile int*)0x30000000) 
#define MAC_WGT     (*(volatile int*)0x30000004) 
#define MAC_ACT     (*(volatile int*)0x30000008) 
#define MAC_VLEN    (*(volatile int*)0x30000014)

// The 4 Hardware PEs
#define PE_0_RES    (*(volatile int*)0x30000020) 
#define PE_1_RES    (*(volatile int*)0x30000024) 
#define PE_2_RES    (*(volatile int*)0x30000028) 
#define PE_3_RES    (*(volatile int*)0x3000002C) 

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

char quantize(int raw_sum, int bias) {
    long long scaled = (((long long)raw_sum + bias) * QUANT_MULTIPLIER) >> QUANT_SHIFT;
    int q = (int)scaled;
    if (q < 0) q = 0; if (q > 127) q = 127;
    return (char)q;
}

void main() {
    MAC_CTRL = 16;
    MAC_VLEN = INPUT_SIZE; 
    
    // Burst ALL Layer 1 data and compute all 4 neurons simultaneously
    dma_burst((void*)layer1_weights, (void*)0x30000004, HIDDEN_NEURONS * INPUT_SIZE, 1);
    dma_burst(embedded_sentence, (void*)0x30000008, INPUT_SIZE, 0);

    MAC_CTRL = 1; 
    while ((MAC_CTRL & 2) == 0); 
    
    // Read the 4 parallel accumulators directly
    hidden_outputs[0] = quantize(PE_0_RES, layer1_biases[0]);
    hidden_outputs[1] = quantize(PE_1_RES, layer1_biases[1]);
    hidden_outputs[2] = quantize(PE_2_RES, layer1_biases[2]);
    hidden_outputs[3] = quantize(PE_3_RES, layer1_biases[3]);
    MAC_CTRL = 2;

    // Output Layer (Compute sequentially since it's just 2 neurons)
    MAC_CTRL = 16; 
    MAC_VLEN = HIDDEN_NEURONS;

    dma_burst((void*)layer2_weights, (void*)0x30000004, OUTPUT_CLASSES * HIDDEN_NEURONS, 1);
    dma_burst(hidden_outputs, (void*)0x30000008, HIDDEN_NEURONS, 1);

    MAC_CTRL = 1; 
    while ((MAC_CTRL & 2) == 0); 
    
    final_logits[0] = PE_0_RES + layer2_biases[0];
    final_logits[1] = PE_1_RES + layer2_biases[1];

    MAC_CTRL = 16; 
    MAC_WGT = final_logits[0]; MAC_ACT = final_logits[1]; 

    asm volatile("ebreak");
}
