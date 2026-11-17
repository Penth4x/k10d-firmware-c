/* @k10d call_single_helper_104b4dc4 @ 0x104b4dc4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with an unassigned register argument.
 * summary:
 *   This function is a one-line wrapper that invokes forward_field_5c_to_helper_104b4faa,
 *   passing the value in unaff_r8 as the argument. No other operations, memory accesses, or
 *   state changes are visible in the pseudocode. The role of the callee is unknown, so the
 *   wrapper's specific purpose cannot be determined beyond forwarding the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104b4dc4(void)

{
  int caller_r8;
  
  forward_field_5c_to_helper_104b4faa(caller_r8);
  return;
}
