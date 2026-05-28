.section .text
.global _start

_start:
    /* Initialize the stack pointer to the top of 8KB RAM (8192 bytes) */
    li sp, 8192
    /* Jump to the C main function */
    jal ra, main

_trap:
    /* If main returns or crashes, loop here infinitely */
    j _trap
