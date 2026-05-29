// firmware/main.c
#define MAC_CTRL  (*(volatile int*)0x30000000)
#define MAC_WGT   (*(volatile int*)0x30000004)
#define MAC_ACT   (*(volatile int*)0x30000008)
#define MAC_RES   (*(volatile int*)0x3000000C)

#define NUM_NEURONS 2
#define INPUT_SIZE  4

const char weights[NUM_NEURONS][INPUT_SIZE] = {
    {2, -3, 5, 1},   // Neuron 0
    {1, 4, -2, 3}    // Neuron 1
};

const char inputs[INPUT_SIZE] = {10, 2, 4, 5};
int layer_outputs[NUM_NEURONS];

void main() {
    for (int i = 0; i < NUM_NEURONS; i++) {
        
        MAC_CTRL = 2; 

        for (int j = 0; j < INPUT_SIZE; j++) {
            MAC_WGT = weights[i][j];
            MAC_ACT = inputs[j];
            MAC_CTRL = 1;
            while ((MAC_CTRL & 2) == 0);
        }

        int raw_sum = MAC_RES;
        layer_outputs[i] = (raw_sum > 0) ? raw_sum : 0;
    }
     
    asm volatile("ebreak");
}
