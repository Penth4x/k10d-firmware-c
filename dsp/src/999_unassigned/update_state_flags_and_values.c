/* @k10d update_state_flags_and_values @ 0x000d353a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a set of global state variables and flags based on the return value of a helper
 *   function.
 * summary:
 *   The function reads a global value, calls sum_absolute_diffs_of_two_arrays three times
 *   with offsets -1, 0, and +1 to populate adjacent globals. It sets bit 2 of DAT_0003cbd4.
 *   It then calls update_state_flag_and_dispatch_000d38e4 and branches on the result: if 2,
 *   it copies values and calls iterate_and_store_values; if 3, it clears bit 7 of
 *   DAT_0003cb80 and sets bit 0 of DAT_0003cbd4; otherwise, it conditionally sets or clears
 *   bit 7 of DAT_0003cb80 based on bit 5 of DAT_0003cbd4, calling copy_cd30_block_to_ccb0
 *   in one case.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_flags_and_values(void)

{
  int iVar1;
  
  iVar1 = (int)DAT_0003cc94;
  _DAT_0003ccb8 = sum_absolute_diffs_of_two_arrays((int)DAT_0003cc94);
  _DAT_0003ccb6 = sum_absolute_diffs_of_two_arrays(iVar1 + -1);
  _DAT_0003ccba = sum_absolute_diffs_of_two_arrays(iVar1 + 1);
  DAT_0003cbd4 = DAT_0003cbd4 | 4;
  iVar1 = update_state_flag_and_dispatch_000d38e4(iVar1);
  if (iVar1 == 2) {
    _DAT_0003ccb2 = _DAT_0003ccb8;
    _DAT_0003ccb4 = _DAT_0003ccb6;
    iVar1 = iterate_and_store_values((void *)&DAT_0003ccb0);
  }
  if (iVar1 == 3) {
    DAT_0003cb80 = DAT_0003cb80 & 0x7f;
    DAT_0003cbd4 = DAT_0003cbd4 | 1;
  }
  else if ((DAT_0003cbd4 & 0x20) == 0) {
    DAT_0003cb80 = DAT_0003cb80 | 0x80;
  }
  else {
    copy_cd30_block_to_ccb0();
    DAT_0003cb80 = DAT_0003cb80 & 0x7f;
  }
  return;
}
