OUTPUT_ARCH(arm)

SECTIONS {
  .startup 0x2000000 : { crt.o(.text) }
  .text   : { *(.text) }
  .data   : { *(.data) }
  .rodata : { *(.rodata*) }
  .bss    : { *(.bss) }
 }
