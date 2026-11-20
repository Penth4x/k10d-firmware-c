/* @k10d update_status_flags_from_counters @ 0x000d3a1c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Reads counter values and updates a status byte based on threshold comparisons.
 * summary:
 *   The function selects one of two sets of 32-bit values based on bit 2 of DAT_0003cbd4.
 *   It calls compute_clamped_offset_000d3adc with the middle 16 bits of the selected value.
 *   It then compares the result against DAT_0003ccd4 (which is updated in-place) to set or
 *   clear bits 1, 3, and 6 of DAT_0003cb80. Finally, it performs a second comparison
 *   involving the high and low 16 bits of the selected value to potentially set bit 6 of
 *   DAT_0003cb80.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_flags_from_counters(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint16_t uStack_1a;
  
  if ((DAT_0003cbd4 & 4) == 0) {
    uStack_1a = _DAT_0003ccb4;
    uVar2 = _DAT_0003ccb2;
    uVar3 = _DAT_0003ccb0;
  }
  else {
    uStack_1a = _DAT_0003ccb6;
    uVar2 = _DAT_0003ccb8;
    uVar3 = _DAT_0003ccba;
  }
  uVar5 = (uint)uVar2;
  _DAT_0003ccd4 = (ushort)((uint)_DAT_0003ccd0 + (uint)_DAT_0003ccd2 >> 1);
  uVar4 = compute_clamped_offset_000d3adc(uVar5);
  if ((uint)_DAT_0003ccd4 < uVar4 << 1) {
    if (_DAT_0003ccd4 < uVar4) {
      bVar1 = DAT_0003cb80 & 0xfd | 0x40;
      if (((((DAT_0003f259 & 4) != 0) && ((DAT_0003cbd4 & 2) == 0)) && ((DAT_0003ce01 & 0x20) == 0))
         && (((DAT_0003cb80 & 8) != 0 && (uVar4 >> 1 <= (uint)_DAT_0003ccd4)))) {
        DAT_0003cbd4 = DAT_0003cbd4 | 0x40;
        bVar1 = DAT_0003cb80 & 0xbd;
      }
    }
    else {
      bVar1 = DAT_0003cb80 & 0xbd;
    }
  }
  else {
    bVar1 = DAT_0003cb80 & 0xbf | 2;
  }
  DAT_0003cb80 = bVar1;
  if (((DAT_0003cb80 & 2) != 0) || ((DAT_0003cb80 & 8) == 0)) {
    if ((uint)uVar3 < (uint)uStack_1a) {
      uVar5 = uStack_1a - uVar5;
    }
    else {
      uVar5 = uVar3 - uVar5;
    }
    if (uVar5 < _DAT_0003ccd4 >> 2) {
      DAT_0003cb80 = DAT_0003cb80 | 0x40;
    }
  }
  return;
}
