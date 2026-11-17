/* @k10d imgp_a_stop_and_reset @ 0x104fe56c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Stops image processor engine A, clears its start flag, and resets associated state.
 * summary:
 *   The function calls set_irq_mask_by_channel with a negative value (-0x7ffffffe) and
 *   0x20, likely to stop or disable engine A (completion bit 0x20). It then calls
 *   imgp_a_start with 0 to clear the start state. It retrieves a pointer via
 *   get_or_init_singleton_object_1051d40e, reads a value with
 *   read_bounded_array_element_1051d696, and writes a masked value back via
 *   update_camera_state_flags, possibly clearing a status bit. Finally, it calls
 *   delete_signal_semaphore on a field at offset 0x1c of the input object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void imgp_a_stop_and_reset(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffffe,0x20);
  imgp_a_start(*(uint32_t *)(param_1 + 0xc),0);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,7);
  update_camera_state_flags(pvVar1,7,uVar2 & 0xfffffffe);
  delete_signal_semaphore((void *)(param_1 + 0x1c));
  return;
}
