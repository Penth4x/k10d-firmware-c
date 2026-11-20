/* @k10d dispatch_mode_transition_event_1036618e @ 0x1036618e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_105577f8 * dispatch_mode_transition_event_1036618e(cls_105577f8 *param_1,int *param_2)

{
  int iVar1;
  bool bVar4;
  char cVar5;
  uint32_t uVar2;
  cls_105577f8 *pcVar3;
  uint32_t uVar6;
  
  if ((*param_2 == 4) || (*param_2 == 5)) {
    call_two_helpers_with_timeout_10366c68(param_1);
  }
  iVar1 = *param_2;
  pcVar3 = param_1;
  if ((iVar1 == 1) || (iVar1 == 2)) goto LAB_1036652a;
  if (iVar1 != 4) {
    if (iVar1 != 5) {
      if (iVar1 != 6) goto LAB_1036652c;
      if (param_1->field_0x1c != 3) goto code_r0x1036651c;
    }
    goto LAB_1036652a;
  }
  iVar1 = param_1->field_0x1c;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = param_2[1];
      if (iVar1 == 0xc) {
        init_object_and_call_virtual_slot_10366ff0(param_1);
        goto LAB_1036652c;
      }
      if (iVar1 != 0x11) {
        if ((iVar1 != 9) && (iVar1 != 0x19)) {
          if (iVar1 != 0x18) goto LAB_1036652c;
          uVar2 = get_or_create_singleton_object_1036c796();
          uVar6 = 0xd;
          goto LAB_103664a4;
        }
        goto code_r0x1036651c;
      }
      pcVar3 = (cls_105577f8 *)dispatch_state_machine_on_magic(param_1);
    }
    else if ((iVar1 == 3) && (param_2[1] == 0x11)) goto code_r0x1036651c;
    goto LAB_1036652a;
  }
  switch(param_2[1]) {
  case 9:
  case 0x19:
code_r0x1036651c:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar6 = 2;
    goto LAB_103664a4;
  case 10:
  case 0xb:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    break;
  case 0xc:
    param_1->field_0x15 = 1;
    break;
  case 0xd:
    call_helper_on_struct_field_1036c4a8();
    iVar1 = poll_subsystem_state_change(param_1);
    if (iVar1 == 0) {
      if ((param_1->field_0x14 == '\0') && (cVar5 = read_byte_at_offset_0x27c(param_1), cVar5 == '\0')) {
        init_object_with_sram_ref_10367096(param_1,0x12);
      }
    }
    else {
      param_1->field_0x4c = 0;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      request_ui_sync_code_4(&param_1->field_0x20);
    }
    goto LAB_10366486;
  case 0xe:
    call_helper_on_struct_field_1036c4a8();
    iVar1 = poll_and_confirm_state_change(param_1);
    if (iVar1 == 0) {
      if ((param_1->field_0x14 == '\0') && (cVar5 = read_byte_at_offset_0x27c(param_1), cVar5 == '\0')) {
        init_object_with_sram_ref_10367096(param_1,0x12);
      }
    }
    else {
      param_1->field_0x4c = 0;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      request_ui_sync_code_4(&param_1->field_0x20);
    }
LAB_10366486:
    write_second_field_via_helper_1036c486(param_1,180000);
    goto LAB_1036652c;
  case 0xf:
    bVar4 = cycle_state_value(param_1,0);
    if (bVar4) {
      dispatch_mode_state_update_10367558(param_1);
      param_1->field_0x4c = 3;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
LAB_103663a8:
      request_ui_sync_code_4(&param_1->field_0x20);
      goto LAB_1036652c;
    }
    break;
  case 0x10:
    bVar4 = cycle_state_value(param_1,1);
    if (bVar4) {
      dispatch_mode_state_update_10367558(param_1);
      param_1->field_0x4c = 3;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      goto LAB_103663a8;
    }
    break;
  case 0x11:
    init_object_and_call_virtual_slot_1036701e(param_1);
    goto LAB_1036652c;
  case 0x18:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar6 = 0xd;
LAB_103664a4:
    pcVar3 = (cls_105577f8 *)read_array_element_bounded(uVar2,uVar6);
    break;
  case 0x25:
    iVar1 = cycle_mode_state_value(param_1,1);
    if (iVar1 != 0) {
      dispatch_mode_state_update_10367558(param_1);
      param_1->field_0x4c = 4;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      goto LAB_103663a8;
    }
    break;
  case 0x26:
    iVar1 = cycle_mode_state_value(param_1,0);
    if (iVar1 != 0) {
      dispatch_mode_state_update_10367558(param_1);
      param_1->field_0x4c = 4;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      goto LAB_103663a8;
    }
    break;
  case 0x27:
    iVar1 = adjust_exposure_parameter(param_1,1);
    if (iVar1 != 0) {
      dispatch_mode_state_update_10367558(param_1);
      param_1->field_0x4c = 4;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      goto LAB_103663a8;
    }
    break;
  case 0x28:
    iVar1 = adjust_exposure_parameter(param_1,0);
    if (iVar1 != 0) {
      dispatch_mode_state_update_10367558(param_1);
      param_1->field_0x4c = 4;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      goto LAB_103663a8;
    }
    break;
  default:
  }
LAB_1036652a:
LAB_1036652c:
  if (param_1->field_0x1c == 0) {
    if (param_1->field_0x15 != '\0') {
      iVar1 = read_field_at_offset_100((uint32_t)(param_1));
      if (iVar1 == 0xb) {
        forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
      }
      else {
        uVar2 = get_or_create_singleton_object_1036c796();
        pcVar3 = (cls_105577f8 *)read_array_element_bounded(uVar2,0xd);
      }
    }
  }
  else {
    param_1->field_0x14 = 0;
    param_1->field_0x15 = 0;
  }
  return pcVar3;
}
