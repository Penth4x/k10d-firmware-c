/* @k10d forward_param_to_helper_104b3e2c @ 0x104b3e2c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_or_init_ram_buffer_104b172a and passes its return value plus param_2 to
 *   invoke_virtual_method_on_nested_object_104b1ea6.
 * summary:
 *   The function is a thin wrapper that invokes get_or_init_ram_buffer_104b172a with no
 *   arguments, captures the returned value in r4, and then calls
 *   invoke_virtual_method_on_nested_object_104b1ea6 with that value and the second input
 *   parameter. No other operations, memory accesses, or state changes are visible in the
 *   pseudocode. The specific subsystem role cannot be determined because both callees are
 *   unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_104b3e2c(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_ram_buffer_104b172a();
  invoke_virtual_method_on_nested_object_104b1ea6(uVar1,param_2);
  return;
}
