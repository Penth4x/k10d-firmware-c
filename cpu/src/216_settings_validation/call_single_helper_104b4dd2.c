/* @k10d call_single_helper_104b4dd2 @ 0x104b4dd2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function and returns.
 * summary:
 *   This function is a one-line wrapper that calls call_subroutine_with_offset_5c_104b4fce
 *   with the value in r8 and returns immediately. No other operations, memory accesses, or
 *   state changes are visible in the pseudocode. The role of the callee is unknown, so the
 *   wrapper's specific purpose cannot be determined beyond forwarding the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104b4dd2(void)

{
  int caller_r8;
  
  call_subroutine_with_offset_5c_104b4fce(caller_r8);
  return;
}
