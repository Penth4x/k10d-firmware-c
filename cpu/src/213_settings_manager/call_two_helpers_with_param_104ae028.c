/* @k10d call_two_helpers_with_param_104ae028 @ 0x104ae028
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions, passing the input pointer to the second.
 * summary:
 *   The function takes a single pointer argument. It first calls
 *   invoke_virtual_slot_two_104ae2bc with no arguments, then calls
 *   invoke_virtual_slot_3_104af0e6 passing the input pointer. No other operations, memory
 *   accesses, or state changes are visible in the pseudocode. The specific roles of the
 *   callees are unknown, so the overall behavior is limited to this two-step dispatch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_104ae028(int *param_1)

{
  invoke_virtual_slot_two_104ae2bc(__frv_reg_unset(4));
  invoke_virtual_slot_3_104af0e6(param_1);
  return;
}
