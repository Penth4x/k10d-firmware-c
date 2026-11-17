/* @k10d call_helper_with_constant_22 @ 0x104f4d60
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer from an unknown helper and passes it with constants 0x16 and 0 to
 *   another helper.
 * summary:
 *   The function calls get_or_init_singleton_object_1051d40e to obtain a pointer, then
 *   passes that pointer along with the integer 0x16 (22) and 0 to
 *   update_camera_state_flags. It returns the constant 1. The specific roles of the callees
 *   and the meaning of the constant 0x16 are not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_constant_22(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,0x16,0);
  return 1;
}
