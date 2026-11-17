/* @k10d poll_state_and_dispatch @ 0x10471b58
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Polls a state function and a condition function, calling a delay and a dispatch helper
 *   based on specific state/condition combinations.
 * summary:
 *   The function calls get_field_at_offset_0x48 to get a state value. If the state is 0 and
 *   query_object_flag_at_offset_0x28 returns non-zero, it calls
 *   invoke_virtual_method_on_nested_object_1047131a with 1000, re-checks
 *   query_object_flag_at_offset_0x28, and if still non-zero, calls
 *   store_value_at_offset_0x48 with 1. It then repeats a similar check for state 1, where
 *   if query_object_flag_at_offset_0x28 returns 0, it calls
 *   invoke_virtual_method_on_nested_object_1047131a with 1000, re-checks, and if still 0,
 *   calls store_value_at_offset_0x48 with 2. The specific camera subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_state_and_dispatch(int param_1)

{
  int iVar1;
  
  iVar1 = get_field_at_offset_0x48(param_1);
  if ((iVar1 == 0) && (iVar1 = query_object_flag_at_offset_0x28(param_1), iVar1 != 0)) {
    invoke_virtual_method_on_nested_object_1047131a(param_1,1000);
    iVar1 = query_object_flag_at_offset_0x28(param_1);
    if (iVar1 != 0) {
      store_value_at_offset_0x48(param_1,1);
    }
  }
  iVar1 = get_field_at_offset_0x48(param_1);
  if ((iVar1 == 1) && (iVar1 = query_object_flag_at_offset_0x28(param_1), iVar1 == 0)) {
    invoke_virtual_method_on_nested_object_1047131a(param_1,1000);
    iVar1 = query_object_flag_at_offset_0x28(param_1);
    if (iVar1 == 0) {
      store_value_at_offset_0x48(param_1,2);
    }
  }
  return;
}
