/* @k10d imgp_c_start_and_ack @ 0x104feb70
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Starts image processor engine C and clears its completion status bit.
 * summary:
 *   The function calls imgp_c_start with the engine C handle from the request block (offset
 *   0x14) and a zero parameter. It then retrieves a status pointer via
 *   get_or_init_singleton_object_1051d40e, reads a status word for engine 7 (likely C)
 *   using read_bounded_array_element_1051d696, and writes back the value with bit 0 cleared
 *   (mask 0xfffffffb) via update_camera_state_flags. This sequence initiates the engine and
 *   acknowledges the completion interrupt/status bit.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void imgp_c_start_and_ack(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffffe,8);
  imgp_c_start(*(uint32_t *)(param_1 + 0x14),0);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,7);
  update_camera_state_flags(pvVar1,7,uVar2 & 0xfffffffb);
  delete_signal_semaphore((void *)(param_1 + 0x4c));
  return;
}
