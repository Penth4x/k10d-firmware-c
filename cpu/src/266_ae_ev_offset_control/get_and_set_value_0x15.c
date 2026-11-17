/* @k10d get_and_set_value_0x15 @ 0x10506134
 * name: model (proposed by the local model from the decompile, confidence 0.30)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Retrieves a value from an unknown source and passes it with constants 0x15 and 0 to a
 *   setter function.
 * summary:
 *   Calls get_or_init_singleton_object_1051d40e to obtain a pointer or value, then calls
 *   update_camera_state_flags with that result, the constant 0x15, and 0. Returns 1
 *   unconditionally. The specific subsystem or data type is not determinable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_and_set_value_0x15(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,0x15,0);
  return 1;
}
