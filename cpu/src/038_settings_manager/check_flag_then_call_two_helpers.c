/* @k10d check_flag_then_call_two_helpers @ 0x103913b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally calls one helper if a byte flag is set, then unconditionally calls a
 *   second helper.
 * summary:
 *   Reads the byte at offset 0x2c4c of the object pointed to by param_1. If it is non-zero,
 *   calls release_object_and_call_helper with param_1 and 0. Then always calls
 *   call_single_helper_104df34c with param_1 and param_2. No other side effects are visible
 *   in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_then_call_two_helpers(int param_1,uint32_t param_2)

{
  if (*(char *)(param_1 + 0x2c4c) != '\0') {
    release_object_and_call_helper(param_1,0);
  }
  call_single_helper_104df34c(param_1,param_2);
  return;
}
