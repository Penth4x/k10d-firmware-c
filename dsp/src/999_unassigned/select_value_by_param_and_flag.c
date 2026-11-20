/* @k10d select_value_by_param_and_flag @ 0x000f4d8e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns a value based on param_1 and the state of DAT_0003c3ac.
 * summary:
 *   If param_1 is 1, it calls compute_clamped_index_000f4db6 with DAT_0003c47d as an
 *   argument and returns the result. Otherwise, it returns 0x24 if DAT_0003c3ac is zero, or
 *   0x35 if it is non-zero. The function acts as a simple selector or getter for a
 *   configuration value or state code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_value_by_param_and_flag(int param_1)

{
  uint32_t uVar1;
  
  if (param_1 == 1) {
    uVar1 = compute_clamped_index_000f4db6(DAT_0003c47d);
  }
  else if (DAT_0003c3ac == '\0') {
    uVar1 = 0x24;
  }
  else {
    uVar1 = 0x35;
  }
  return uVar1;
}
