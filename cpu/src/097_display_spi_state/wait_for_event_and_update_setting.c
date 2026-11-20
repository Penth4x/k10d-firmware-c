/* @k10d wait_for_event_and_update_setting @ 0x10418a24
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Polls an event source until non-zero, stores the result, and updates a setting with a
 *   flag value.
 * summary:
 *   The function sets a flag at offset 0x354 of a sub-object, calls several initialization
 *   or state-change helpers, and then enters a loop calling alloc_first_ring_entry until it
 *   returns non-zero. It stores the result in param_1+0x84, calls set_object_field_0x20,
 *   resets several fields in the object, and finally calls setting_set with value 0x60 and
 *   a byte from param_1+0x14fd. The specific subsystem is not identifiable from the
 *   available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_event_and_update_setting(int param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  
  *(uint8_t *)(*(int *)(param_1 + 0x50) + 0x354) = 1;
  set_flag_at_offset_0x34c(*(uint32_t *)(param_1 + 0x50));
  check_kernel_call_success_10459fea();
  process_entry_list_until_sentinel((int)(*(uint32_t *)(param_1 + 0x50)),(void *)(*(uint32_t *)(param_1 + 0x14f8)));
  while( true ) {
    iVar1 = (uintptr_t)(alloc_first_ring_entry(*(uint32_t *)(param_1 + 0x54),param_1 + 0x40));
    *(int *)(param_1 + 0x84) = iVar1;
    if (iVar1 != 0) break;
    check_kernel_call_success_10459fea();
  }
  set_object_field_0x20(*(int *)(param_1 + 0x84),(void *)(param_1 + 0x137a));
  call_two_helpers_on_object_10514cfa(*(int *)(param_1 + 0x50));
  check_kernel_call_success_10459fea();
  *(uint8_t *)(*(int *)(param_1 + 0x50) + 0x354) = 1;
  set_flag_at_offset_0x34c(*(uint32_t *)(param_1 + 0x50));
  *(uint8_t *)(param_1 + 0x14f4) = 0;
  *(uint32_t *)(param_1 + 0x14f8) = 0;
  *(uint32_t *)(param_1 + 0x88) = 0;
  *(uint32_t *)(param_1 + 0x84) = 0;
  *(uint32_t *)(param_1 + 0x8c) = 0;
  *(uint8_t *)(param_1 + 0x14fc) = 1;
  set_setting_and_notify_object(*(uint32_t *)(param_1 + 0x5c),0);
  pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
  pvVar3 = (void *)get_or_init_singleton_object_1051d40e();
  uVar4 = read_bounded_array_element_1051d696(pvVar3,0x18);
  update_camera_state_flags(pvVar2,0x18,uVar4 & 0xfffffff7);
  check_kernel_call_success_10459fea();
  setting_set(*(int *)(param_1 + 0x7c),0x60,(uint)*(byte *)(param_1 + 0x14fd));
  set_setting_and_notify_object(*(uint32_t *)(param_1 + 0x5c),*(uint8_t *)(param_1 + 0x14fd));
  return;
}
