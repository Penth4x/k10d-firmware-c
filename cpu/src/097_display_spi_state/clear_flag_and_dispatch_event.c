/* @k10d clear_flag_and_dispatch_event @ 0x104182a4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Clears a specific bit in a status word and conditionally triggers an event handler
 *   based on two status checks.
 * summary:
 *   The function first calls set_object_flag_and_reset with an offset and zero. It then
 *   acquires two pointers via get_or_init_singleton_object_1051d40e, reads a value from the
 *   second pointer using read_bounded_array_element_1051d696, and writes a modified version
 *   (with bit 3 cleared) to the first pointer using update_camera_state_flags. It clears
 *   bit 16 (0x10000) of the 32-bit value at param_1 + 0x1530. It then checks two conditions
 *   via test_bit_in_object_field and check_status_bit1 on the value at param_1 + 0x5c. If
 *   either is non-zero, it calls set_mode_state_flag and dispatch_mode_event_request with a
 *   specific event code (0x130006).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_dispatch_event(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  
  set_object_flag_and_reset((int *)(param_1 + 0x14bc),(int)(0));
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
  uVar3 = read_bounded_array_element_1051d696(pvVar2,0x18);
  update_camera_state_flags(pvVar1,0x18,uVar3 & 0xffffffef);
  *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffeffff;
  iVar4 = test_bit_in_object_field(*(uint32_t *)(param_1 + 0x5c));
  if ((iVar4 != 0) || (iVar4 = check_status_bit1(*(uint32_t *)(param_1 + 0x5c)), iVar4 != 0)) {
    set_mode_state_flag(param_1,1,0);
    dispatch_mode_event_request((cls_105c2050 *)(param_1 + 0x60),0x130006);
  }
  return;
}
