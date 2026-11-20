/* @k10d dispatch_event_by_type_10368f94 @ 0x10368f94
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 013_ae_bracketing_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_10557b38 * dispatch_event_by_type_10368f94(cls_10557b38 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  cls_10557b38 *pcVar3;
  
  if ((((param_1->field_0x2b5 != '\0') || (param_1->field_0x2b6 != '\0')) ||
      (param_1->field_0x2b7 != '\0')) || (param_1->field_0x2b8 != '\0')) {
    param_1->field_0x2b5 = 0;
    param_1->field_0x2b6 = 0;
    param_1->field_0x2b7 = 0;
    param_1->field_0x2b8 = 0;
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
    request_ui_sync_code_4(&param_1->field_0x14);
  }
  if (*param_2 != 4) {
    return param_1;
  }
  iVar1 = param_2[1];
  if (iVar1 == 0x27) {
    if (param_1->field_0x2a8 == '\0') {
      return param_1;
    }
    check_and_dispatch_virtual_call(param_1,param_2[2] & 0xff);
    return param_1;
  }
  if (iVar1 == 0x28) {
    if (param_1->field_0x2a8 == '\0') goto LAB_1036911e;
    iVar1 = check_and_invoke_virtual_slot(param_1,param_2[2] & 0xff);
  }
  else {
    if (iVar1 == 6) {
      if (param_1->field_0x2a8 == '\0') {
        return param_1;
      }
      poll_until_flag_clear_10369650(param_1,param_2[2] & 0xff);
      return param_1;
    }
    if (iVar1 != 0x12) {
      if (iVar1 == 0x25) {
        init_object_with_sram_pointers(param_1);
        return param_1;
      }
      if (iVar1 == 0x26) {
        initialize_object_with_params_10369510(param_1);
        return param_1;
      }
      if (iVar1 == 9) {
        invoke_virtual_slot_8_after_init(param_1);
        return param_1;
      }
      if (iVar1 == 0x10) {
        poll_and_process_event_flag_10369804(param_1);
        return param_1;
      }
      if (iVar1 == 0xf) {
        poll_and_process_event_flag_1036988e(param_1);
        return param_1;
      }
      if (iVar1 == 0xe) {
        poll_and_process_pending_event(param_1);
        return param_1;
      }
      if (iVar1 == 0xd) {
        poll_and_process_event_loop(param_1);
        return param_1;
      }
      if (((iVar1 != 0x18) && (iVar1 != 0x19)) && (iVar1 != 0x11)) {
        if (iVar1 != 0xc) {
          return param_1;
        }
        forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
        return param_1;
      }
      goto LAB_1036911e;
    }
    if (param_1->field_0x2a8 == '\0') goto LAB_1036911e;
    iVar1 = poll_until_flag_clears(param_1,param_2[2] & 0xff);
  }
  if (iVar1 != 0) {
    return param_1;
  }
LAB_1036911e:
  dispatch_state_based_on_flag_103694bc(param_1);
  uVar2 = get_or_create_singleton_object_1036c796();
  pcVar3 = (cls_10557b38 *)read_array_element_bounded(uVar2,2);
  return pcVar3;
}
