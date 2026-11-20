/* @k10d accumulate_range_masked_values @ 0x000d957e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Iterates 16 slots, sums values within a range, and builds a bitmask of processed slots.
 * summary:
 *   Loops 16 times, checking bits in param_5. For each active bit, it reads a short from
 *   param_2. If the value is 0xff and param_6 is 1, it writes param_1-0xc to that slot. It
 *   sums values that fall within the range [param_1-param_3, param_1+param_4] and counts
 *   them. It sets bits in _DAT_0003c6e4 for processed slots and increments DAT_0003c6f3 for
 *   non-0xff values outside the range. Finally, it calls divide_two_integers with the sum
 *   and count, and if param_6 is 0, calls compute_signed_half_sum with accumulated byte
 *   sums.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint16_t
accumulate_range_masked_values(short param_1,int param_2,short param_3,short param_4,ushort param_5,short param_6)

{
  uint uVar1;
  uint16_t uVar3;
  uint32_t uVar2;
  int iVar4;
  short sVar5;
  short sVar6;
  int caller_r10;
  uint caller_r11;
  
  if (param_6 == 0) {
    caller_r11 = 0;
    caller_r10 = 0;
    DAT_0003c6f5 = 0;
  }
  DAT_0003c6f3 = '\0';
  sVar6 = 0;
  _DAT_0003c6e4 = param_5;
  sVar5 = 0;
  uVar1 = 0;
  do {
    if (((int)(uint)param_5 >> (uVar1 & 0x1f) & 1U) != 1) {
      iVar4 = uVar1 * 2;
      if ((*(short *)(iVar4 + param_2) == 0xff) &&
         (_DAT_0003c6e4 = (ushort)(1 << ((byte)uVar1 & 0xf)) | _DAT_0003c6e4, param_6 == 1)) {
        *(short *)(iVar4 + param_2) = param_1 + -0xc;
      }
      if (((short)(param_1 - param_3) < *(short *)(iVar4 + param_2)) &&
         (*(short *)(iVar4 + param_2) <= (short)(param_1 + param_4))) {
        sVar6 = sVar6 + *(short *)(iVar4 + param_2);
        sVar5 = sVar5 + 1;
        if (param_6 == 0) {
          caller_r10 = caller_r10 + (uint)*(byte *)(uVar1 + 0x3c550);
          caller_r11 = (uint)(short)((short)caller_r11 + 1);
        }
      }
      else {
        _DAT_0003c6e4 = (ushort)(1 << ((byte)uVar1 & 0xf)) | _DAT_0003c6e4;
        if (*(short *)(iVar4 + param_2) != 0xff) {
          DAT_0003c6f3 = DAT_0003c6f3 + '\x01';
        }
      }
    }
    uVar1 = (uint)(short)((short)uVar1 + 1);
  } while ((int)uVar1 < 0x10);
  uVar3 = divide_two_integers(sVar6,sVar5);
  if (param_6 == 0) {
    uVar2 = compute_signed_half_sum(caller_r11,caller_r10);
    DAT_0003c6f5 = (uint8_t)uVar2;
  }
  return uVar3;
}
