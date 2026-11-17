/* @k10d copy_32_bytes_to_dat_block @ 0x10435aa0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies 32 bytes from a source buffer to a destination buffer in a loop.
 * summary:
 *   The function iterates 16 times, copying 4-byte words from the address 0x1000c4d4 (plus
 *   offset) to the address 0x1000c4d4 - 0x7ffe1d24 (plus offset). This results in a total
 *   of 64 bytes being copied from the source region to the destination region. No callees
 *   are invoked, and the specific roles of the source and destination memory regions are
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_32_bytes_to_dat_block(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x40;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar2 + -0x7ffe1d24) = *(uint32_t *)(iVar2 + 0x1000c4d4/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
