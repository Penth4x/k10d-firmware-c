/* @k10d init_event_queue_and_send_msg @ 0x1041892a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Resets a small state block in the object and sends a 0x18-byte message via two helper
 *   calls.
 * summary:
 *   Clears bytes at param_1+0x14f4 and +0x14f8, sets a flag at +0x14f8+4 to 1, and calls
 *   set_setting_and_notify_object with the value at param_1+0x5c and 0. It then calls
 *   get_or_init_singleton_object_1051d40e twice to obtain two pointers, calls
 *   read_bounded_array_element_1051d696 on the second with 0x18, and finally calls
 *   update_camera_state_flags with the first pointer, 0x18, and the masked result. The
 *   pattern resembles initializing a message queue or event slot and posting a fixed-size
 *   message.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_event_queue_and_send_msg(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  
  *(uint8_t *)(param_1 + 0x14f4) = 0;
  *(uint32_t *)(param_1 + 0x14f8) = 0;
  *(uint8_t *)(param_1 + 0x14fc) = 1;
  set_setting_and_notify_object(*(uint32_t *)(param_1 + 0x5c),0);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
  uVar3 = read_bounded_array_element_1051d696(pvVar2,0x18);
  update_camera_state_flags(pvVar1,0x18,uVar3 & 0xfffffff7);
  return;
}
