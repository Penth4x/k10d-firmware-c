/* @k10d process_event_with_setting_check @ 0x103b9250
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_event_with_setting_check(cls_10594c54 *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if (((param_1->field_0x60 != 1) || (param_2 != 10)) && (param_1->field_0x54 == 0)) {
    if (param_2 == 0x29) {
      if (param_1->field_0x8 == _DAT_105bb5a4/*ROM*/) {
        return;
      }
      if (param_1->field_0x8 == _DAT_105bb5b0/*ROM*/) {
        return;
      }
      iVar1 = setting_get(param_1->field_0x68,0x97);
      if (iVar1 == 0) {
        set_flag_and_store_byte_103b8a8e((uint32_t)(param_1),0x8c);
      }
      else {
        set_flag_and_store_byte_103b8a8e((uint32_t)(param_1),0xa0);
      }
    }
    else {
      iVar1 = (uint32_t)(dispatch_virtual_slot_15_103c72b2((void*)(param_1->field_0x50)));
      if (iVar1 != param_1->field_0x50) {
        param_1->field_0x54 = iVar1;
      }
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1->field_0x50 + 0x10);
        uVar2 = (((vtbl_entry*)(iVar1))[12].fn)(param_1->field_0x50 + (int)((vtbl_entry*)(iVar1))[12].adj);
        iVar1 = *(int *)(param_1->field_0x50 + 0x10);
        (((vtbl_entry*)(iVar1))[13].fn)(param_1->field_0x50 + (int)((vtbl_entry*)(iVar1))[13].adj,0);
        uVar2 = lookup_value_by_code((uint32_t)(param_1),uVar2);
        call_helper_with_0x50000((uint32_t)(param_1),uVar2);
      }
      else {
        set_flg_obj(&param_1->field_0x48);
      }
    }
    write_value_to_offset_0x40((uint32_t)(param_1));
  }
  return;
}
