/* @k10d update_state_flags_000c70da @ 0x000c70da
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Modifies a state byte at 0x0003c4d1 based on other flag bytes and calls helper
 *   functions.
 * summary:
 *   The function reads and writes to DAT_0003c4d1, toggling bits 3 and 6 based on its
 *   current value. It checks several other global flags (DAT_0003c030, DAT_0003c066,
 *   DAT_0003c000, DAT_0003c410, DAT_0003c440) to decide whether to call
 *   update_two_flag_bytes or clear bit 3. It unconditionally calls
 *   clear_flag_if_conditions_met. If bit 5 of DAT_0003c4d1 is set, it may call FUN_000e3ba8
 *   and clears bit 5. Finally, it normalizes the lower bits of DAT_0003c4d1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flags_000c70da(void)

{
  byte bVar1;
  byte bVar2;
  
  if ((DAT_0003c4d1 & 8) == 0) {
    DAT_0003c4d1 = DAT_0003c4d1 & 0xbf;
  }
  else {
    DAT_0003c4d1 = DAT_0003c4d1 | 0x40;
  }
  if (((DAT_0003c030 & 4) == 0) && ((DAT_0003c066 & 0x10) == 0)) {
    if ((((DAT_0003c000 & 1) == 0) || ((DAT_0003c410 & 8) == 0)) ||
       (((DAT_0003c410 & 0x20) == 0 && (DAT_0003c440 == '\x01')))) {
      update_two_flag_bytes();
    }
    else {
      DAT_0003c4d1 = DAT_0003c4d1 & 0xef;
    }
  }
  else {
    DAT_0003c4d1 = DAT_0003c4d1 & 0xef;
  }
  clear_flag_if_conditions_met();
  if ((DAT_0003c4d1 & 0x20) != 0) {
    if ((DAT_0003c023 & 1) == 0) {
      FUN_000e3ba8();
    }
    DAT_0003c4d1 = DAT_0003c4d1 & 0xdf;
  }
  bVar1 = DAT_0003c4d1 & 0xfe;
  bVar2 = DAT_0003c4d1 & 4;
  DAT_0003c4d1 = bVar1;
  if (bVar2 != 0) {
    DAT_0003c4d1 = bVar1 | 1;
  }
  return;
}
