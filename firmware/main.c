#include <stdint.h>

// Hardware Register Memory Map (Mapped to Base Address 0x30000000)
#define MAC_BASE 0x30000000
#define MAC_CTRL (*(volatile uint32_t*)(MAC_BASE + 0x00)) // Bit 0: Start, Bit 1: Done
#define MAC_WGT  (*(volatile uint32_t*)(MAC_BASE + 0x04)) // Weight Input
#define MAC_ACT  (*(volatile uint32_t*)(MAC_BASE + 0x08)) // Activation Input
#define MAC_RES  (*(volatile uint32_t*)(MAC_BASE + 0x0C)) // Result Output

// Test data: We want to compute (2*3) + (4*5) + (1*2)
int weights[3]     = {2, 4, 1};
int activations[3] = {3, 5, 2};

int main() {
    // 1. Reset the MAC Result to 0 (Assuming your hardware does this on system reset, 
    // but good practice to ensure state if doing multiple passes).
    
    // 2. Loop through the array and feed the hardware
    for (int i = 0; i < 3; i++) {
        // Write data to hardware registers
        MAC_WGT = weights[i];
        MAC_ACT = activations[i];
        
        // Assert Start Bit (Bit 0)
        MAC_CTRL = 1;
        
        // Wait for Done Bit (Bit 1) to go high
        while ((MAC_CTRL & 2) == 0) {
            // Busy wait (In a real system, you'd use interrupts)
        }
        
        // De-assert Start Bit
        MAC_CTRL = 0;
    }
    
    // 3. Read final result
    volatile int final_result = MAC_RES;
    
    // 4. End program by asserting the trap pin
    asm volatile("ebreak");
    
    return 0;
}
