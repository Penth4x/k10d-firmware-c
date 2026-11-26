/* @k10d dispatch_state_transition_103707fc @ 0x103707fc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Checks a state flag at offset 0x68 and dispatches to either a success or failure
 *   handler sequence.
 * summary:
 *   The function reads an integer at param_1+0x68 and compares it to 0x315000d. It compares
 *   the result (0 or 1) with a byte at param_1+0x74. If they match, it calls
 *   get_or_create_singleton_object_1036c796 and read_array_element_bounded with argument 2.
 *   If they differ, it calls a sequence of functions including
 *   write_second_field_of_struct, init_object_with_two_ids_10370ad4,
 *   process_buffer_and_return_offset_1036be72, and
 *   check_kernel_call_success_10459fea(1000). Based on the return value of
 *   process_buffer_and_return_offset_1036be72, it may call lookup_and_copy_result three
 *   times with specific addresses before calling get_or_create_singleton_object_1036c796
 *   and read_array_element_bounded with argument 2 or 1. Finally, it calls
 *   write_second_field_of_struct with argument 1 in the mismatch branch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_transition_103707fc(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(int *)((int)param_1 + 0x68) == 0x315000d);
  if (uVar4 == *(byte *)((int)param_1 + 0x74)) {
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar2 = read_array_element_bounded(uVar2,2);
  }
  else {
    write_second_field_of_struct(param_1,0);
    init_object_with_two_ids_10370ad4(param_1);
    iVar1 = process_buffer_and_return_offset_1036be72(param_1,uVar4);
    check_kernel_call_success_10459fea(0x3e8);
    set_field_and_call_helper_10370bbc((int)param_1);
    if (iVar1 == 1) {
      lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015d38/*SDRAM*/));
      lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015b24/*SDRAM*/));
      lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015910/*SDRAM*/));
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar3 = 2;
    }
    else {
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar3 = 1;
    }
    uVar2 = read_array_element_bounded(uVar2,uVar3);
    write_second_field_of_struct(param_1,1);
  }
  return uVar2;
}
