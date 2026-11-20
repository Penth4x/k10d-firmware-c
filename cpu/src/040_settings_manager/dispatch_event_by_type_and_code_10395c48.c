/* @k10d dispatch_event_by_type_and_code_10395c48 @ 0x10395c48
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_by_type_and_code_10395c48(cls_10562e10 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  param_1->field_0xb4 = (uint32_t)(param_1);
  iVar1 = *param_2;
  if (iVar1 == 3) {
    iVar1 = param_2[1];
    if (iVar1 == 0x18) {
      call_single_helper_10395e3e((uint32_t)(param_1));
    }
    else if (iVar1 == 0x11) {
      store_value_at_offset_0xb4(param_1);
    }
    else if (iVar1 == 0xc) {
      store_computed_value_at_offset_0xb4(param_1);
    }
  }
  else if (iVar1 == 7) {
    uVar2 = get_or_create_singleton_object_10396af8();
    param_1->field_0xb4 = uVar2;
  }
  else if (iVar1 == 8) {
    uVar2 = (((vtbl_entry*)(param_1->field_0x0))[13].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[13].adj,0,0);
    param_1->field_0xb4 = uVar2;
  }
  else if (iRam8001a098 != 2) {
    init_object_with_two_ids_10395f10(param_1);
    call_single_helper_10395f4e((uint32_t)(param_1));
  }
  return param_1->field_0xb4;
}
