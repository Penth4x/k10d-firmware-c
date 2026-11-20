/* @k10d initialize_state_flags_and_buffers @ 0x000d35aa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets specific bits in a status word, initializes adjacent data fields, and calls helper
 *   functions to populate buffer pointers.
 * summary:
 *   The function modifies the global variable DAT_0003cbd4 by setting bits 1 and 2. It
 *   initializes DAT_0003cc94 and DAT_0003cc93, and calls sum_absolute_diffs_of_two_arrays
 *   three times with arguments 0, -1, and 1 to store results in DAT_0003ccb8, DAT_0003ccb6,
 *   and DAT_0003ccba. It then calls update_state_flag_and_dispatch_000d38e4(0) and branches
 *   based on the return value (2 or 3) to further modify DAT_0003cb80 and DAT_0003cbd4,
 *   potentially copying data via iterate_and_store_values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_state_flags_and_buffers(void)

{
  int iVar1;
  
  DAT_0003cbd4 = DAT_0003cbd4 | 2;
  DAT_0003cc94 = 0;
  DAT_0003cc93 = 4;
  _DAT_0003ccb8 = sum_absolute_diffs_of_two_arrays(0);
  _DAT_0003ccb6 = sum_absolute_diffs_of_two_arrays(0xffffffff);
  _DAT_0003ccba = sum_absolute_diffs_of_two_arrays(1);
  DAT_0003cbd4 = DAT_0003cbd4 | 4;
  iVar1 = update_state_flag_and_dispatch_000d38e4(0);
  if (iVar1 == 2) {
    _DAT_0003ccb2 = _DAT_0003ccb8;
    _DAT_0003ccb4 = _DAT_0003ccb6;
    iVar1 = iterate_and_store_values((void *)&DAT_0003ccb0);
  }
  if (iVar1 == 3) {
    DAT_0003cb80 = DAT_0003cb80 & 0x7f;
    DAT_0003cbd4 = DAT_0003cbd4 | 0x82;
  }
  else {
    DAT_0003cb80 = DAT_0003cb80 | 0x80;
    DAT_0003cbd4 = DAT_0003cbd4 & 0xfd;
  }
  return;
}
