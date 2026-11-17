/* @k10d copy_rodata_to_sram_10008114 @ 0x10008114
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Copies a 5000-byte block from ROM to SDRAM.
 * summary:
 *   Performs a byte-wise loop copying 0x137e bytes from the read-only data section at
 *   0x10008387 to the SDRAM location at 0x8000067b. This is a standard initialization
 *   routine for loading kernel data structures or lookup tables into writable memory. No
 *   other functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_rodata_to_sram_10008114(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x137e;
  do {
    iVar1 = iVar2 + -1;
    (&DAT_8000067b/*SDRAM*/)[iVar2] = (&DAT_10008387/*ROM*/)[iVar2];
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
