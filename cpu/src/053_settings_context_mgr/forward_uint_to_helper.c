/* @k10d forward_uint_to_helper @ 0x103b90de
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * purpose:
 *   Passes a single uint argument to set_object_reference_and_check_flags with a null
 *   second argument and returns the result.
 * summary:
 *   This is a thin wrapper that calls set_object_reference_and_check_flags with param_1 and
 *   a null pointer, then returns the boolean result. No other operations or side effects
 *   are visible in the pseudocode. The caller is update_state_and_notify.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool forward_uint_to_helper(uint param_1)

{
  bool bVar1;
  
  bVar1 = set_object_reference_and_check_flags(param_1,(int *)0x0);
  return bVar1;
}
