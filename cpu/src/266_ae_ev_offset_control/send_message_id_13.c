/* @k10d send_message_id_13 @ 0x105040b2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Retrieves a message object and sends message ID 0xd with a zero payload.
 * summary:
 *   Calls get_or_init_singleton_object_1051d40e to obtain a pointer, then passes it to
 *   update_camera_state_flags with arguments 0xd and 0. Returns 1. The specific role of the
 *   message ID or the object type is not determinable from the provided pseudocode and
 *   unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_message_id_13(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar1,0xd,0);
  return 1;
}
