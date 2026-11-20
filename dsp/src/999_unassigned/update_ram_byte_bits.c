/* @k10d update_ram_byte_bits @ 0x000e3350
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Merges a 4-bit value into the low nibble of a RAM byte while preserving bits 5-7, then
 *   calls a helper.
 * summary:
 *   The function saves the state of DAT_00000420, clears it, and then modifies the byte at
 *   bRam00000000. It extracts the lower 4 bits of param_1 and ORs them into the byte after
 *   masking out the lower 5 bits (preserving bits 5-7). If param_1 is 0x10 or greater, it
 *   sets bit 4 (0x10) in the result. Finally, it calls toggle_ram_flag_bit5 and restores
 *   DAT_00000420.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_ram_byte_bits(uint param_1)

{
  uint8_t uVar1;
  byte bVar2;
  
  uVar1 = DAT_00000420;
  DAT_00000420 = 0;
  if ((int)param_1 < 0x10) {
    bVar2 = 0;
  }
  else {
    param_1 = param_1 & 0xf;
    bVar2 = 0x10;
  }
  bRam00000000 = bVar2 | bRam00000000 & 0xe0 | (byte)param_1;
  toggle_ram_flag_bit5();
  DAT_00000420 = uVar1;
  return;
}
