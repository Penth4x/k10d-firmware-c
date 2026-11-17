/* @k10d call_helper_with_constant_args_105073ee @ 0x105073ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper to obtain a pointer, then passes it with constants 0xf and 0 to a second
 *   helper, returning 1.
 * summary:
 *   The function calls get_or_init_singleton_object_1051d40e to get a pointer, then calls
 *   update_camera_state_flags with that pointer, 0xf, and 0. It unconditionally returns 1.
 *   The callees are unnamed, so the specific subsystem role is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_constant_args_105073ee(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,0xf,0);
  return 1;
}
