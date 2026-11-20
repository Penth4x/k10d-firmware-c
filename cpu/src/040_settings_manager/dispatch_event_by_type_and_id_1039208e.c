/* @k10d dispatch_event_by_type_and_id_1039208e @ 0x1039208e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_by_type_and_id_1039208e(cls_10562758 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  param_1->field_0x84 = (uint32_t)(param_1);
  iVar1 = *param_2;
  if (iVar1 == 3) {
    iVar1 = param_2[1];
    if (iVar1 == 0xe) {
      call_three_init_helpers_10392286(param_1);
    }
    else if (iVar1 == 0xd) {
      call_three_init_routines_103922a6(param_1);
    }
    else if (iVar1 == 0x10) {
      call_helper_on_offset_field_103922c6(param_1);
    }
    else if (iVar1 == 0xf) {
      call_helper_on_offset_field_103922d6(param_1);
    }
    else if (iVar1 == 0x18) {
      call_subroutine_if_flag_set_103922fe(param_1);
    }
    else if (iVar1 == 0x11) {
      store_result_at_offset_0x84(param_1);
    }
    else if (iVar1 == 0xc) {
      store_value_at_offset_0x84(param_1);
    }
  }
  else if (iVar1 == 7) {
    uVar2 = get_or_create_singleton_object_10396af8();
    param_1->field_0x84 = uVar2;
  }
  else if (iVar1 == 8) {
    uVar2 = (((vtbl_entry*)(param_1->field_0x0))[13].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[13].adj,0,0);
    param_1->field_0x84 = uVar2;
  }
  else if ((iVar1 == 6) && (param_2[1] == 1)) {
    get_or_create_sram_object_1040a240();
    init_struct_field_at_offset_0x60(__frv_reg_unset(4));
    call_three_unnamed_helpers_103923fa(param_1,1);
    request_ui_sync_code_4((char*)(param_1) ->field_0x8);
  }
  return param_1->field_0x84;
}
