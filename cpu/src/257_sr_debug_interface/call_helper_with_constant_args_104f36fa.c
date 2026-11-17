/* @k10d call_helper_with_constant_args_104f36fa @ 0x104f36fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Calls a helper to obtain a pointer, then calls a second helper with that pointer and
 *   constants 0xc and 0.
 * summary:
 *   The function calls get_or_init_singleton_object_1051d40e to get a pointer, passes it
 *   along with the constants 0xc and 0 to update_camera_state_flags, and returns 1. The
 *   specific roles of the callees and the pointer are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_constant_args_104f36fa(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,0xc,0);
  return 1;
}
