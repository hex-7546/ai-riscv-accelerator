#include "text_data.h"

#define MAC_CTRL  (*(volatile int*)0x30000000)
#define MAC_WGT   (*(volatile int*)0x30000004)
#define MAC_ACT   (*(volatile int*)0x30000008)
#define MAC_RES   (*(volatile int*)0x3000000C)

// Formal Quantization Parameters
#define QUANT_MULTIPLIER  1073741824  // M0 parameter
#define QUANT_SHIFT       31          // n bit-shift parameter

int embedded_sentence[INPUT_SIZE] = {
    12,  4, -8, 19,  0, 22, 11,  5, -3, 14, 29,  1,  8, -6, 13,  4,
     0, 11, 15,  2, -9,  4,  7, 18, 22, -1,  0,  5, 14, 11, -3,  8,
    -5, 12,  6,  0, 19, 14, -2,  7, 11,  3,  8, -4, 12, 15,  0,  1,
     9, -2, 14, 22,  5,  8, -1,  0,  4, 11, 13, -2,  6,  9, 14,  3
};

// Our scratchpads must now store proper 8-bit signed characters (char)
char hidden_outputs[HIDDEN_NEURONS];
int final_logits[OUTPUT_CLASSES];

void main() {
    int hardware_total_tracking = 0;

    // STAGE 1: INPUT -> HIDDEN (With formal INT8 requantization)
    for (int i = 0; i < HIDDEN_NEURONS; i++) {
        for (int j = 0; j < INPUT_SIZE; j++) {
            MAC_WGT = layer1_weights[i][j];
            MAC_ACT = embedded_sentence[j];
            MAC_CTRL = 1; 
            while ((MAC_CTRL & 2) == 0); 
        }
        int cumulative_total = MAC_RES;
        int raw_sum = cumulative_total - hardware_total_tracking;
        hardware_total_tracking = cumulative_total;

        raw_sum += layer1_biases[i];
        
        // --- FORMAL QUANTIZATION DOWN-SCALE STEP ---
        // Multiply 32-bit accumulator by integer scale factor, then bit-shift right
        long long scaled_sum = ((long long)raw_sum * QUANT_MULTIPLIER) >> QUANT_SHIFT;
        int quantized_8bit = (int)scaled_sum;
        
        // ReLU & Int8 Saturation Clamping [-128, 127]
        if (quantized_8bit < 0) quantized_8bit = 0;
        if (quantized_8bit > 127) quantized_8bit = 127;
        
        hidden_outputs[i] = (char)quantized_8bit; 
    }

    // STAGE 2: HIDDEN -> OUTPUT 
    for (int i = 0; i < OUTPUT_CLASSES; i++) {
        for (int j = 0; j < HIDDEN_NEURONS; j++) {
            MAC_WGT = layer2_weights[i][j];
            MAC_ACT = (int)hidden_outputs[j]; // Pass the properly rescaled INT8 activation
            MAC_CTRL = 1;
            while ((MAC_CTRL & 2) == 0);
        }
        int cumulative_total = MAC_RES;
        int raw_sum = cumulative_total - hardware_total_tracking;
        hardware_total_tracking = cumulative_total;

        final_logits[i] = raw_sum + layer2_biases[i];
    }

    // Output raw final scores to testbench
    MAC_WGT = final_logits[0]; 
    MAC_ACT = final_logits[1]; 

    asm volatile("ebreak");
}
