/* @k10d call_helper_with_param_two_104b3d84 @ 0x104b3d84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper to get a value, passes it and param_2 to another helper, then
 *   returns 1.
 * summary:
 *   The function calls get_or_init_ram_buffer_104b172a to obtain a value, then calls
 *   init_object_with_subobjects_104b1762 with that value and param_2. It ignores param_1
 *   entirely and always returns 1. The specific roles of the callees are unknown, so the
 *   operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_param_two_104b3d84(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_ram_buffer_104b172a();
  init_object_with_subobjects_104b1762((void *)uVar1,param_2);
  return 1;
}
