/* @k10d call_single_helper_104b4db4 @ 0x104b4db4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with an untracked register argument.
 * summary:
 *   This function is a one-line wrapper that invokes
 *   call_subroutine_with_offset_5c_104b4f66, passing the value in unaff_r8 (likely a
 *   register argument not captured by Ghidra). No other operations, memory accesses, or
 *   side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104b4db4(void)

{
  int caller_r8;
  
  call_subroutine_with_offset_5c_104b4f66(caller_r8);
  return;
}
