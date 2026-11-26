/* @k10d process_state_machine_event @ 0x103718a2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * purpose:
 *   Checks a state ID, executes a loop of state transitions, and returns a result code
 *   based on the final state.
 * summary:
 *   The function verifies if the object's state field (offset 0x50) matches 0x3160055. If
 *   so, it initializes sub-states, enters a loop calling register_and_activate_event until
 *   it returns a value other than 10, and then branches based on the final return value (5,
 *   4, 1, or other) to call specific handlers or set a global flag. It finally calls
 *   read_array_element_bounded with a value from get_or_create_singleton_object_1036c796
 *   and a status code (0xd or 1) to produce the return value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_state_machine_event(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  if (*(int *)((int)param_1 + 0x50) == 0x3160055) {
    write_second_field_of_struct(param_1,0);
    write_ten_fields_to_subobject((int)param_1);
    init_object_with_size_and_callback(param_1,(int)param_1 + 0x4a8);
    while (iVar1 = register_and_activate_event((int)param_1), iVar1 == 10) {
      init_object_with_fixed_state_1037228c(param_1);
    }
    check_kernel_call_success_10459fea(0x3e8);
    write_second_field_of_struct(param_1,1);
    if (iVar1 == 5) {
      init_object_with_sram_ref_103722e0(param_1,8);
      return (int)param_1;
    }
    if (iVar1 == 4) {
      init_object_with_sram_ref_103722e0(param_1,9);
      return (int)param_1;
    }
    if (iVar1 == 1) {
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar3 = 0xd;
    }
    else {
      uRam800043a4 = 5;
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar3 = 1;
    }
  }
  else {
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = 0xd;
  }
  iVar1 = read_array_element_bounded(uVar2,uVar3);
  return iVar1;
}
