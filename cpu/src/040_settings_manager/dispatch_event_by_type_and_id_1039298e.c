/* @k10d dispatch_event_by_type_and_id_1039298e @ 0x1039298e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_by_type_and_id_1039298e(cls_10562850 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  param_1->field_0x7c = (uint32_t)(param_1);
  iVar1 = *param_2;
  if (iVar1 == 3) {
    iVar1 = param_2[1];
    if (iVar1 == 0xe) {
      call_three_init_helpers_10392b84(param_1);
    }
    else if (iVar1 == 0xd) {
      call_three_init_helpers_10392ba4(param_1);
    }
    else if (iVar1 == 0x10) {
      empty_stub_function_10392bc4((uint32_t)(param_1));
    }
    else if (iVar1 == 0xf) {
      empty_stub_10392bc6((uint32_t)(param_1));
    }
    else if (iVar1 == 0x18) {
      empty_stub_10392be0((uint32_t)(param_1));
    }
    else if (iVar1 == 0x11) {
      store_callee_result_at_offset_0x7c_10392bc8(param_1);
    }
    else if (iVar1 == 0xc) {
      store_value_at_offset_0x7c(param_1);
    }
  }
  else if (iVar1 == 7) {
    uVar2 = get_or_create_singleton_object_10396af8();
    param_1->field_0x7c = uVar2;
  }
  else if (iVar1 == 8) {
    uVar2 = (((vtbl_entry*)(param_1->field_0x0))[13].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[13].adj,0,0);
    param_1->field_0x7c = uVar2;
  }
  else if ((iVar1 == 6) && (param_2[1] == 1)) {
    get_or_create_sram_object_1040a240();
    init_struct_field_at_offset_0x60((uint32_t)param_1);
    call_three_init_helpers_10392d02(param_1);
    request_ui_sync_code_4((char*)(param_1) ->field_0x8);
  }
  return param_1->field_0x7c;
}
