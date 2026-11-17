/* @k10d imgp_b_start_and_notify @ 0x104fe914
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Starts image processor engine B and signals completion via a message queue.
 * summary:
 *   The function initiates the image processor engine B using the request block at
 *   param_1+0x10. It then retrieves a message queue handle, calculates a message ID (7),
 *   and sends a modified value to the queue. Finally, it calls an unknown helper on
 *   param_1+0x34. The context of the module (image_processor_driver) and the specific call
 *   to imgp_b_start confirm the role.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void imgp_b_start_and_notify(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffffe,4);
  imgp_b_start(*(uint32_t *)(param_1 + 0x10),0);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,7);
  update_camera_state_flags(pvVar1,7,uVar2 & 0xfffffffd);
  delete_signal_semaphore((void *)(param_1 + 0x34));
  return;
}
