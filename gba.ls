OUTPUT_ARCH(arm)

SECTIONS {
  .text 0x2000000 : {
    crt.o(.text)
    *(.text)
  }
  .data   : { *(.data) }
  .rodata : { *(.rodata*) }
  bss_start = . ;
  .bss    : { *(.bss) }
  bss_end = . ;
 }
