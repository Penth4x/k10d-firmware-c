/* @k10d virtual_slot3_init @ 0x10504f94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Calls a helper to obtain a pointer, passes it to a second helper with constants 4 and
 *   0, and returns 1.
 * summary:
 *   This function is virtual method slot 3 of class cls_105d4f74. It calls
 *   get_or_init_singleton_object_1051d40e to retrieve a pointer, then calls
 *   update_camera_state_flags with that pointer and the integer arguments 4 and 0. It
 *   unconditionally returns 1. The specific roles of the callees are unknown, so the
 *   behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t virtual_slot3_init(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,4,0);
  return 1;
}
