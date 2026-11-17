/* @k10d invoke_virtual_then_nine_helpers @ 0x10465834
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a virtual call on a sub-object, then calls nine helper functions with a member
 *   pointer.
 * summary:
 *   The function reads a pointer from param_1+0x14, dereferences it to get a vtable
 *   pointer, and invokes a virtual method (slot 12) on that sub-object. It then calls nine
 *   distinct helper functions (invoke_object_method_at_offset_0x14,
 *   call_subobject_method_at_offset_0x14_10440724, call_helper_on_field_0x18_1044080e,
 *   invoke_object_method_at_offset_0x18_1044087a, call_subroutine_on_field_0x18_104407d8,
 *   clear_low_bit_at_offset_0x20, call_helper_on_offset_0x10,
 *   call_subroutine_on_field_0x10, write_three_words_to_param), passing the value at
 *   param_1+0xc to each. The specific roles of these helpers are unknown, but the pattern
 *   suggests a multi-step cleanup or state transition sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_then_nine_helpers(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  (**(code **)(iVar1 + 100))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x60));
  invoke_object_method_at_offset_0x14(*(void **)(param_1 + 0xc));
  call_subobject_method_at_offset_0x14_10440724(*(void **)(param_1 + 0xc));
  call_helper_on_field_0x18_1044080e(*(void **)(param_1 + 0xc));
  invoke_object_method_at_offset_0x18_1044087a(*(void **)(param_1 + 0xc));
  call_subroutine_on_field_0x18_104407d8(*(void **)(param_1 + 0xc));
  clear_low_bit_at_offset_0x20(*(void **)(param_1 + 0xc));
  call_helper_on_offset_0x10(*(void **)(param_1 + 0xc));
  call_subroutine_on_field_0x10(*(void **)(param_1 + 0xc));
  write_three_words_to_param(*(void **)(param_1 + 0xc));
  return;
}
