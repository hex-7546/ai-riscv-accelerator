#include "text_data.h"

#define DMA_SRC    (*(volatile int*)0x40000000)
#define DMA_DST    (*(volatile int*)0x40000004)
#define DMA_LEN    (*(volatile int*)0x40000008)
#define DMA_START  (*(volatile int*)0x4000000C)
#define DMA_STRIDE (*(volatile int*)0x40000010)

#define MAC_CTRL    (*(volatile int*)0x30000000) 
#define MAC_WGT     (*(volatile int*)0x30000004) 
#define MAC_ACT     (*(volatile int*)0x30000008) 
#define MAC_VLEN    (*(volatile int*)0x30000014)

#define PE_0_0_RES  (*(volatile int*)0x30000020)
#define PE_0_1_RES  (*(volatile int*)0x30000024)

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

char quantize(int raw_sum, int bias) {
    long long scaled = (((long long)raw_sum + bias) * QUANT_MULTIPLIER) >> QUANT_SHIFT;
    int q = (int)scaled;
    if (q < 0) q = 0; if (q > 127) q = 127;
    return (char)q;
}

void main() {
    MAC_VLEN = INPUT_SIZE; 
    MAC_CTRL = 16; 
    
    // 1. PRE-LOAD: Weights into Bank 1
    DMA_SRC   = (int)layer1_weights;
    DMA_DST   = 0x30000004;
    DMA_LEN   = HIDDEN_NEURONS * INPUT_SIZE;
    DMA_START = 3; 
    while (DMA_START & 1); 
    
    // TOGGLE: Bank 1 Active
    MAC_CTRL = 0x110; 
    
    // 2. AUTOMATED HARDWARE STRIDE BATCHING
    DMA_SRC    = (int)embedded_sentence;
    DMA_DST    = 0x30000008; 
    DMA_LEN    = INPUT_SIZE;  
    DMA_STRIDE = 256;         
    DMA_START  = 5;          // Stride Mode Enabled + Start!
    while (DMA_START & 1);

    // 3. COMPUTE Layer 1
    MAC_CTRL = 1; 
    
    // OVERLAP: Fetch Layer 2 weights into Bank 0
    DMA_SRC   = (int)layer2_weights;
    DMA_DST   = 0x30000004;
    DMA_LEN   = OUTPUT_CLASSES * HIDDEN_NEURONS;
    DMA_START = 3; 

    while ((MAC_CTRL & 2) == 0); 
    
    hidden_outputs[0] = quantize(PE_0_0_RES, layer1_biases[0]);
    hidden_outputs[1] = quantize(PE_0_1_RES, layer1_biases[1]);
    MAC_CTRL = 2; // Ack

    // 4. TOGGLE: Bank 0 Active for Layer 2
    MAC_CTRL = 0x110; 
    MAC_VLEN = HIDDEN_NEURONS;
    
    DMA_SRC   = (int)hidden_outputs;
    DMA_DST   = 0x30000008;
    DMA_LEN   = HIDDEN_NEURONS;
    DMA_START = 3; 
    while (DMA_START & 1);

    MAC_CTRL = 1; 
    while ((MAC_CTRL & 2) == 0); 
    
    final_logits[0] = PE_0_0_RES + layer2_biases[0];
    final_logits[1] = PE_0_1_RES + layer2_biases[1];

    MAC_CTRL = 16; 
    MAC_WGT = final_logits[0]; MAC_ACT = final_logits[1]; 

    asm volatile("ebreak");
}
