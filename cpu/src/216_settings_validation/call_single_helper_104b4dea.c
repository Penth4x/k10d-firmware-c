/* @k10d call_single_helper_104b4dea @ 0x104b4dea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with an unassigned register argument.
 * summary:
 *   This function is a one-line wrapper that invokes
 *   call_subroutine_with_offset_5c_104b5004, passing the value in unaff_r8 as the first
 *   argument. No other operations, memory accesses, or state changes are visible in the
 *   pseudocode. The role of the callee is unknown, so the wrapper's specific purpose cannot
 *   be determined beyond forwarding the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104b4dea(void)

{
  int caller_r8;
  
  call_subroutine_with_offset_5c_104b5004(caller_r8);
  return;
}
