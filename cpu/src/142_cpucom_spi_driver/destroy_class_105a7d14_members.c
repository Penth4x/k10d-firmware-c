/* @k10d destroy_class_105a7d14_members @ 0x10465728
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Destroys the member objects of a class_105a7d14 instance by calling their cleanup and
 *   virtual methods.
 * summary:
 *   The function takes a pointer to a class_105a7d14 object (param_1) and systematically
 *   destroys its members. It calls call_kernel_with_short_id on the member at offset 0x24,
 *   then a series of functions on the member at offset 0xc. It also calls functions on
 *   members at offsets 0x10 and 0x14, including several virtual method calls on the object
 *   at offset 0x14 and a virtual call on the object at offset 0x18. Finally, it calls
 *   check_kernel_call_success_10459d88 on the member at offset 0x24. This pattern is
 *   consistent with a member-destruction routine for a complex object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_class_105a7d14_members(void *param_1)

{
  int iVar1;
  
  call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x24));
  write_three_words_to_param(*(void **)((int)param_1 + 0xc));
  invoke_object_method_at_offset_0x14(*(void **)((int)param_1 + 0xc));
  call_subobject_method_at_offset_0x14_10440724(*(void **)((int)param_1 + 0xc));
  call_helper_on_field_0x18_1044080e(*(void **)((int)param_1 + 0xc));
  invoke_object_method_at_offset_0x18_1044087a(*(void **)((int)param_1 + 0xc));
  call_subroutine_on_field_0x18_104407d8(*(void **)((int)param_1 + 0xc));
  call_helper_on_offset_0x10(*(void **)((int)param_1 + 0xc));
  call_subroutine_on_field_0x10(*(void **)((int)param_1 + 0xc));
  clear_low_bit_at_offset_0x20(*(void **)((int)param_1 + 0xc));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x10));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x10));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
  (**(code **)(iVar1 + 100))(*(int *)((int)param_1 + 0x14) + (int)*(short *)(iVar1 + 0x60));
  clear_flag_if_active(*(void **)((int)param_1 + 0x14));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
  (**(code **)(iVar1 + 0x4c))(*(int *)((int)param_1 + 0x14) + (int)*(short *)(iVar1 + 0x48));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
  (**(code **)(iVar1 + 0x84))(*(int *)((int)param_1 + 0x14) + (int)*(short *)(iVar1 + 0x80));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  (**(code **)(iVar1 + 0x2c))(*(int *)((int)param_1 + 0x18) + (int)*(short *)(iVar1 + 0x28));
  check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x24));
  return;
}
