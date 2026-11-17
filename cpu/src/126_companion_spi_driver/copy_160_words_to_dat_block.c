/* @k10d copy_160_words_to_dat_block @ 0x104362b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies 160 consecutive 32-bit words from a source region to a destination region.
 * summary:
 *   The function performs a simple memory copy of 0x280 bytes (160 words) in a backward
 *   loop. It reads from an address derived from 0x1000c6d4 and writes to an address derived
 *   from 0x7ffe1c24. No callees are present, and the specific roles of the source and
 *   destination memory regions are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_160_words_to_dat_block(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x280;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar2 + -0x7ffe1c24) = *(uint32_t *)(iVar2 + 0x1000c6d4/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
