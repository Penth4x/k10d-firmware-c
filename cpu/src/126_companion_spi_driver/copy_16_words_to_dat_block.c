/* @k10d copy_16_words_to_dat_block @ 0x104389e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies 16 consecutive 32-bit words from a source region into a destination region.
 * summary:
 *   The function performs a simple 16-iteration loop, copying 4 bytes at a time from an
 *   address derived from 0x1000c514 to an address derived from DAT_104389e0 (offset
 *   -0x7ffe1464). There are no callees, no conditional logic, and no interaction with known
 *   MMIO regions or camera subsystems. The specific roles of the source and destination
 *   memory regions are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_16_words_to_dat_block(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x40;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar2 + -0x7ffe1464) = *(uint32_t *)(iVar2 + 0x1000c514/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
