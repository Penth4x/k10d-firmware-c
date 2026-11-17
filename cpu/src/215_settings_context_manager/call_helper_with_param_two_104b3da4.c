/* @k10d call_helper_with_param_two_104b3da4 @ 0x104b3da4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_or_init_ram_buffer_104b172a, passes its result and param_2 to
 *   invoke_virtual_slot_3_on_object_array, and returns 1.
 * summary:
 *   The function invokes get_or_init_ram_buffer_104b172a with no arguments and stores the
 *   return value in a local. It then calls invoke_virtual_slot_3_on_object_array with that
 *   value and the second input parameter. It unconditionally returns the constant 1. No
 *   camera-specific behavior is evident from the pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_param_two_104b3da4(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_ram_buffer_104b172a();
  invoke_virtual_slot_3_on_object_array((void *)uVar1,param_2);
  return 1;
}
