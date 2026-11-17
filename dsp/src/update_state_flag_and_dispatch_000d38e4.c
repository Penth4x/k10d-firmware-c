/* @k10d update_state_flag_and_dispatch_000d38e4 @ 0x000d38e4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a status flag based on three 16-bit values and conditionally calls subroutines.
 * summary:
 *   The function reads three unsigned short values from global memory, selecting between
 *   two sets based on bit 2 of DAT_0003cbd4. It sets or clears bit 7 of DAT_0003cb80
 *   depending on whether the first value is strictly less than the other two. If bit 7 is
 *   cleared, it calls accumulate_pairwise_differences and
 *   update_status_flags_from_counters, then conditionally stores param_1 to DAT_0003cc95
 *   and calls update_status_word_and_payload or sets the return value to 3. Returns 2 or 3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t update_state_flag_and_dispatch_000d38e4(uint32_t param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar4;
  uint32_t uVar5;
  ushort uVar3;
  
  uVar5 = 2;
  bVar1 = DAT_0003cb80 | 0x80;
  uVar2 = _DAT_0003ccb2;
  uVar4 = _DAT_0003ccb0;
  uVar3 = _DAT_0003ccb4;
  if ((DAT_0003cbd4 & 4) != 0) {
    uVar2 = _DAT_0003ccb8;
    uVar4 = _DAT_0003ccba;
    uVar3 = _DAT_0003ccb6;
  }
  if (((uVar2 <= uVar3) && (uVar2 <= uVar4)) && ((uVar2 != uVar3 || (uVar2 != uVar4)))) {
    bVar1 = DAT_0003cb80 & 0x7f;
  }
  DAT_0003cb80 = bVar1;
  if ((DAT_0003cb80 & 0x80) == 0) {
    accumulate_pairwise_differences(param_1);
    update_status_flags_from_counters();
    if (((DAT_0003cb80 & 2) == 0) || ((DAT_0003cb80 & 0x40) != 0)) {
      if (((DAT_0003cbd4 & 2) == 0) &&
         (((DAT_0003cb80 & 0x40) == 0 && ((DAT_0003cbd4 & 0x20) == 0)))) {
        DAT_0003cc95 = (char)param_1;
        update_status_word_and_payload();
      }
    }
    else {
      uVar5 = 3;
      DAT_0003cc95 = (char)param_1;
    }
  }
  return uVar5;
}
