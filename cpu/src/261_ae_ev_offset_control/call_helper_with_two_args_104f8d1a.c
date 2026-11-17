/* @k10d call_helper_with_two_args_104f8d1a @ 0x104f8d1a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Gets a pointer from get_or_init_singleton_object_1051d40e and passes it with constants
 *   0x12 and 0 to update_camera_state_flags.
 * summary:
 *   The function calls get_or_init_singleton_object_1051d40e to obtain a pointer, then
 *   calls update_camera_state_flags with that pointer, the constant 0x12, and 0. It returns
 *   1. The specific roles of the callees are unknown, so the operation is described
 *   mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_two_args_104f8d1a(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,0x12,0);
  return 1;
}
