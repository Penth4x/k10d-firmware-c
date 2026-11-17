/* @k10d update_bitmask_from_params @ 0x000dd63a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears specific bits in DAT_00000009 based on param_2 and param_3, then sets bit 0.
 * summary:
 *   The function iterates 16 times, clearing bits 1 and 2 of DAT_00000009 conditionally
 *   based on the bit at position (param_3 * 8 + param_2) in a 16-bit value. It also clears
 *   the upper two bits of DAT_00000008 and sets bit 0 of DAT_00000009. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_bitmask_from_params(uint32_t param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  DAT_00000009 = DAT_00000009 & 0xfd;
  uVar2 = 0;
  do {
    bVar1 = DAT_00000009 & 0xfe;
    if ((param_3 * 8 + param_2 & 0xffffU & 0x8000 >> (uVar2 & 0x1f) & 0xffffU) == 0) {
      bVar1 = DAT_00000009 & 0xfc;
    }
    DAT_00000009 = bVar1;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x10);
  DAT_00000008 = DAT_00000008 & 0x3f;
  DAT_00000009 = DAT_00000009 | 1;
  return;
}
