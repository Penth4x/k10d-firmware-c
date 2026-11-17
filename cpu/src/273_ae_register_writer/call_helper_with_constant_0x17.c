/* @k10d call_helper_with_constant_0x17 @ 0x10514034
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer from get_or_init_singleton_object_1051d40e and passes it to
 *   update_camera_state_flags with arguments 0x17 and 0.
 * summary:
 *   The function calls get_or_init_singleton_object_1051d40e to obtain a void pointer. It
 *   then calls update_camera_state_flags, passing the retrieved pointer as the first
 *   argument, the constant 0x17 as the second, and 0 as the third. It returns the integer
 *   1. The specific roles of the callees and the meaning of the constant 0x17 are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_constant_0x17(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,0x17,0);
  return 1;
}
