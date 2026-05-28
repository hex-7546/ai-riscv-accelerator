MEMORY
{
    RAM (xrw) : ORIGIN = 0x00000000, LENGTH = 8K
}

SECTIONS
{
    .text :
    {
        . = ALIGN(4);
        *(.text)           /* Code */
        *(.text*)
        . = ALIGN(4);
    } > RAM

    .rodata :
    {
        . = ALIGN(4);
        *(.rodata)         /* Read-only constants */
        *(.rodata*)
        . = ALIGN(4);
    } > RAM

    .data :
    {
        . = ALIGN(4);
        *(.data)           /* Initialized variables */
        *(.data*)
        . = ALIGN(4);
    } > RAM
}
