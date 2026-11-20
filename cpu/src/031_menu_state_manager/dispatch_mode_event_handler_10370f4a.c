/* @k10d dispatch_mode_event_handler_10370f4a @ 0x10370f4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1037121e) overlaps instruction at (ram,0x1037121c)
    */

cls_10558104 * dispatch_mode_event_handler_10370f4a(cls_10558104 *param_1,int *param_2)

{
  int iVar1;
  char cVar4;
  bool bVar5;
  uint32_t uVar2;
  cls_10558104 *pcVar3;
  uint32_t uVar6;
  
  if ((*param_2 == 4) || (*param_2 == 5)) {
    call_two_helpers_with_param_1037197a(param_1);
  }
  iVar1 = *param_2;
  pcVar3 = param_1;
  if ((iVar1 == 1) || (iVar1 == 2)) goto LAB_103713a2;
  if (iVar1 != 4) {
    if (iVar1 != 5) {
      if (iVar1 != 6) goto LAB_103713a4;
      if (param_1->field_0x18 != 5) goto code_r0x1037138e;
    }
    goto LAB_103713a2;
  }
  iVar1 = param_1->field_0x18;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = param_2[1];
      if (iVar1 == 0xc) {
        init_object_and_call_virtual_slot_103721b6(param_1);
        goto LAB_103713a4;
      }
      if (iVar1 == 0x11) {
        param_1->field_0x1c = 1;
        set_fields_and_call_virtual_slot(param_1);
        goto LAB_103713a4;
      }
      if ((iVar1 != 9) && (iVar1 != 0x19)) {
        if (iVar1 == 0x18) {
          init_object_and_call_virtual_slot_1037221e(param_1);
        }
        goto LAB_103713a4;
      }
      goto code_r0x1037138e;
    }
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        iVar1 = param_2[1];
        if (iVar1 == 0xc) {
          if (param_1->field_0x1c != 1) {
            init_object_and_call_virtual_slot_1037221e(param_1);
            goto LAB_103713a4;
          }
          goto LAB_10371340;
        }
        if (iVar1 != 0x11) {
          if ((iVar1 != 9) && (iVar1 != 0x19)) {
            if (iVar1 != 0x18) goto LAB_103713a4;
            uVar2 = get_or_create_singleton_object_1036c796();
            uVar6 = 0xd;
            goto LAB_103710c6;
          }
          goto code_r0x1037138e;
        }
        pcVar3 = (cls_10558104 *)process_state_machine_event(param_1);
      }
      else if ((iVar1 == 5) && (param_2[1] == 0x11)) goto code_r0x1037138e;
      goto LAB_103713a2;
    }
    switch(param_2[1]) {
    case 9:
    case 0x19:
      goto code_r0x1037138e;
    case 10:
    case 0xb:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
      break;
    case 0xc:
      copy_struct_bytes_to_sram(param_1);
      goto LAB_10371340;
    case 0xd:
      iVar1 = step_mode_parameter_value(param_1,1);
      if (iVar1 != 0) {
        if ((*(int *)&param_1->field_0x54 == 0) || (*(int *)&param_1->field_0x54 == 1)) {
          param_1->field_0x4c = 6;
          (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
        }
        else {
          bVar5 = dispatch_object_state_change_10372604(param_1,0);
          if (!bVar5) break;
          param_1->field_0x4c = 7;
          (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
        }
        goto LAB_103712e4;
      }
      break;
    case 0xe:
      iVar1 = step_mode_parameter_value(param_1,0);
      if (iVar1 != 0) {
        if ((*(int *)&param_1->field_0x54 == 0) || (*(int *)&param_1->field_0x54 == 1)) {
          param_1->field_0x4c = 6;
          (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
        }
        else {
          bVar5 = dispatch_object_state_change_10372604(param_1,0);
          if (!bVar5) break;
          param_1->field_0x4c = 7;
          (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
        }
        goto LAB_103712e4;
      }
      break;
    case 0xf:
      param_1->field_0x58 = param_1->field_0x54;
      param_1->field_0x59 = param_1->field_0x55;
      param_1->field_0x5a = param_1->field_0x56;
      param_1->field_0x5b = param_1->field_0x57;
      toggle_state_bit(param_1,1);
      param_1->field_0x4c = 5;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      goto LAB_103712e4;
    case 0x10:
      param_1->field_0x58 = param_1->field_0x54;
      param_1->field_0x59 = param_1->field_0x55;
      param_1->field_0x5a = param_1->field_0x56;
      param_1->field_0x5b = param_1->field_0x57;
      toggle_state_bit(param_1,0);
      param_1->field_0x4c = 5;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
LAB_103712e4:
      request_ui_sync_code_4(&param_1->field_0x20);
      goto LAB_103713a4;
    case 0x11:
      param_1->field_0x1c = 2;
      set_fields_and_call_virtual_slot(param_1);
      goto LAB_103713a4;
    case 0x18:
      copy_struct_bytes_to_sram(param_1);
LAB_10371340:
      init_object_and_call_virtual_slot_103721ea(param_1);
      goto LAB_103713a4;
    default:
    }
    goto LAB_103713a2;
  }
  switch(param_2[1]) {
  case 9:
  case 0x19:
code_r0x1037138e:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar6 = 2;
    goto LAB_103710c6;
  case 10:
  case 0xb:
  case 0xf:
  case 0x10:
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
  case 0x25:
    call_helper_on_struct_field_1036c4a8();
    iVar1 = poll_for_matching_event_103724dc(param_1);
    if (iVar1 == 0) {
      if ((param_1->field_0x14 == '\0') && (cVar4 = read_byte_at_offset_0x290(param_1), cVar4 == '\0')) {
        init_object_with_sram_ref_103722e0(param_1,0x13);
      }
    }
    else {
      param_1->field_0x4c = 0;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      request_ui_sync_code_4(&param_1->field_0x20);
    }
    goto LAB_103710b0;
  case 0xe:
  case 0x26:
    call_helper_on_struct_field_1036c4a8();
    iVar1 = poll_sensor_status_change(param_1);
    if (iVar1 == 0) {
      if ((param_1->field_0x14 == '\0') && (cVar4 = read_byte_at_offset_0x290(param_1), cVar4 == '\0')) {
        init_object_with_sram_ref_103722e0(param_1,0x13);
      }
    }
    else {
      param_1->field_0x4c = 0;
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      request_ui_sync_code_4(&param_1->field_0x20);
    }
LAB_103710b0:
    write_second_field_via_helper_1036c486(param_1,180000);
    goto LAB_103713a4;
  case 0x11:
    goto LAB_10371340;
  case 0x18:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar6 = 0xd;
LAB_103710c6:
    pcVar3 = (cls_10558104 *)read_array_element_bounded(uVar2,uVar6);
    break;
  default:
  }
LAB_103713a2:
LAB_103713a4:
  if (param_1->field_0x18 == 0) {
    if (param_1->field_0x15 != '\0') {
      uVar2 = get_or_create_singleton_object_1036c796();
      pcVar3 = (cls_10558104 *)read_array_element_bounded(uVar2,0xd);
    }
  }
  else {
    param_1->field_0x14 = 0;
    param_1->field_0x15 = 0;
  }
  return pcVar3;
}
