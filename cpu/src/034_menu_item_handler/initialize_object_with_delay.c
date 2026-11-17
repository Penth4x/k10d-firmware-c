/* @k10d initialize_object_with_delay @ 0x1037335c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 034_menu_item_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_delay(int *param_1)

{
  call_helper_on_struct_field_1036c4a8();
  if (*(char *)((int)param_1 + 0x1f) != '\0') {
    check_and_update_pair_fields_103739d4(param_1);
  }
  param_1[9] = 0xd;
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  request_ui_sync_code_4(param_1 + 0x119);
  check_kernel_call_success_10459fea();
  invoke_slot2_on_two_offsets(param_1);
  empty_stub_103736b6(param_1);
  write_second_field_of_struct(param_1,1);
  return;
}
