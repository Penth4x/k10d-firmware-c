/* @k10d initialize_object_with_delay @ 0x1037335c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 034_menu_item_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_delay(cls_105584bc *param_1)

{
  call_helper_on_struct_field_1036c4a8();
  if (param_1->field_0x1f != '\0') {
    check_and_update_pair_fields_103739d4(param_1);
  }
  param_1->field_0x24 = (uint32_t)((void *)0xd);
  (((vtbl_entry*)(param_1->field_0x0))[8].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
  request_ui_sync_code_4(&param_1->field_0x464);
  check_kernel_call_success_10459fea(0x3e8);
  invoke_slot2_on_two_offsets(param_1);
  empty_stub_103736b6((uint32_t)(param_1));
  write_second_field_of_struct(param_1,1);
  return;
}
