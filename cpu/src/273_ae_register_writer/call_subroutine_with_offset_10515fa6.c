/* @k10d call_subroutine_with_offset_10515fa6 @ 0x10515fa6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument offset by 0x178 and the second argument
 *   unchanged.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   remove_entry_from_array_105169e8. It adds 0x178 to the first parameter before passing
 *   it, suggesting it is operating on a specific field within a larger structure pointed to
 *   by param_1. No other side effects or global state modifications are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_10515fa6(int param_1,int param_2)

{
  remove_entry_from_array_105169e8(param_1 + 0x178,param_2);
  return;
}
