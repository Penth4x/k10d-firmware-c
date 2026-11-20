/* @k10d dispatch_mode_event_handler_10430944 @ 0x10430944
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 115_mode_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Dispatches camera mode change events based on event ID and sub-state, updating internal
 *   flags and calling subsystem handlers.
 * summary:
 *   The function acts as a central dispatcher for mode-related events, branching on param_2
 *   (event ID) and param_3 (sub-state). For event 0x2000000, it handles three distinct sub-
 *   states involving object creation, flag updates, and calls to various subsystem
 *   functions like apply_settings_and_dispatch and apply_settings_change. It manages state
 *   flags at offsets 0x2c, 0x2d, 0x41, and 0xa0 within the object pointed to by param_1.
 *   Other event IDs trigger specific cleanup or status update routines.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10430960) overlaps instruction at (ram,0x1043095e)
    */

bool dispatch_mode_event_handler_10430944(void *param_1,int param_2,int param_3)

{
  uint8_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint32_t uVar7;
  bool bVar9;
  int *piVar8;
  uint32_t uVar10;
  int iVar11;
  uintptr_t sp;
  bool bVar12;
  uint8_t auStack_130 [64];
  uint8_t auStack_f0 [64];
  uint8_t auStack_b0 [20];
  uint8_t auStack_9c [20];
  uint32_t uStack_88;
  uint8_t uStack_84;
  uint32_t uStack_80;
  uint32_t auStack_7c [5];
  uint8_t auStack_68 [20];
  uint32_t uStack_54;
  uint8_t uStack_50;
  uint32_t uStack_4c;
  uint8_t auStack_48 [64];
  
  if (param_2 == 0x2000000) {
    bVar12 = false;
    if (param_3 == 1) {
      iVar2 = (*(code *)0x1042fe12/*ROM*/)(*(uint32_t *)((int)param_1 + 0x38));
      iVar3 = (*(code *)0x1042fe0a/*ROM*/)(*(uint32_t *)((int)param_1 + 0x38));
      iVar4 = read_field_at_offset_0x44(*(uint32_t *)((int)param_1 + 0x38));
      iVar5 = read_field_at_offset_0x90(*(uint32_t *)((int)param_1 + 0x38));
      if ((iVar3 == 0) || (iVar3 == 4)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(uint8_t *)((int)param_1 + 0xa4) = uVar1;
      if ((iVar4 == 0) || (iVar4 == 4)) {
        iVar11 = 0;
      }
      else {
        iVar11 = 1;
      }
      if (iVar11 == 0) {
        (*(code *)0x1043462c/*ROM*/)(*(uint32_t *)((int)param_1 + 0x30));
      }
      if ((iVar3 != 2) || (bVar9 = true, iVar11 != 0)) {
        bVar9 = false;
      }
      if (*(char *)((int)param_1 + 0x41) == '\0') {
        cls_105a8a1c_new((void*)(auStack_130));
        copy_struct_under_semaphore((int)param_1,auStack_130);
        if (((iVar4 == 4) && (iVar5 == 0)) && (*(int *)((int)param_1 + 0xa0) != 0)) {
          iVar4 = *(int *)((int)param_1 + 0x30);
          uVar6 = extract_status_bitfield((void*)(auStack_130),0x2e);
          apply_settings_and_dispatch(iVar4,uVar6 & 0xff,iVar11);
          bVar9 = true;
        }
        else {
          uVar7 = *(uint32_t *)((int)param_1 + 0x30);
          uVar6 = extract_status_bitfield((void*)(auStack_130),0x2e);
          apply_settings_change(uVar7,uVar6 & 0xff,iVar11);
        }
        if (bVar9) {
          set_flag_at_offset_0x7c_1043209a(param_1,1);
        }
        cls_105a8a1c_delete((void*)(auStack_130),2);
      }
      if ((iVar3 == 4) && ((iVar2 == 3 || (iVar2 == 0)))) {
        dispatch_event_with_timeout_10435380(*(uint32_t *)((int)param_1 + 0x30),0,0);
      }
      uVar10 = *(uint32_t *)((int)param_1 + 0x38);
      uVar7 = (*(code *)0x1042fe0a/*ROM*/)(uVar10);
      uVar6 = get_field_at_offset_eight(uVar10,uVar7);
      if (((uVar6 & 1) != 0) && (iVar3 = dispatch_power_off_steps(param_1,uVar6), iVar3 != 0)) {
        cls_105a8a1c_new((void*)(auStack_f0));
        copy_struct_under_semaphore((int)param_1,auStack_f0);
        iVar3 = *(int *)((int)param_1 + 0x30);
        uVar6 = extract_status_bitfield((void*)(auStack_f0),0x2e);
        apply_settings_and_dispatch(iVar3,uVar6 & 0xff,0);
        set_flag_at_offset_0x7c_1043209a(param_1,1);
        bVar9 = true;
        cls_105a8a1c_delete((void*)(auStack_f0),2);
      }
      copy_sr_debug_flags_to_struct(*(void **)((int)param_1 + 0x30));
      evaluate_status_and_dispatch_result(param_1);
      if ((iVar5 == 0) || (iVar2 == 0)) {
        iVar2 = get_byte_at_offset_c(*(uint32_t *)((int)param_1 + 0x38),iVar2);
        if (iVar2 == 0) {
          *(uint32_t *)((int)param_1 + 0xa0) = 0;
        }
        else {
          iVar2 = read_byte_at_offset_0x16(*(uint32_t *)((int)param_1 + 0x30));
          if (iVar2 == 0) {
            *(uint32_t *)((int)param_1 + 0xa0) = 1;
          }
          else {
            *(uint32_t *)((int)param_1 + 0xa0) = 2;
          }
        }
        invoke_virtual_on_nine_objects(*(uint32_t *)((int)param_1 + 0x38),0x50001,
                     *(uint32_t *)((int)param_1 + 0xa0));
      }
      iVar2 = (*(code *)0x10432dce/*ROM*/)(param_1);
      if (iVar2 != 0) {
        poll_event_until_clear(param_1,0);
        iVar2 = (*(code *)0x10432df0/*ROM*/)(param_1);
        if (iVar2 == 3) {
          set_flag_and_call_helper_10435224(*(uint32_t *)((int)param_1 + 0x30),0);
          uVar7 = *(uint32_t *)((int)param_1 + 0x30);
          uVar10 = 1;
        }
        else {
          uVar7 = *(uint32_t *)((int)param_1 + 0x30);
          if (iVar2 == 2) {
            uVar10 = 0;
          }
          else {
            uVar10 = 1;
          }
        }
        set_flag_and_call_helper_10435224(uVar7,uVar10);
        clear_struct_field_at_0x3c(param_1);
      }
      *(uint8_t *)((int)param_1 + 0x41) = 0;
      if (((bVar9) && (*(char *)((int)param_1 + 0x2c) == '\0')) &&
         (bVar9 = query_status_flag_0x400(param_1,1), bVar9)) {
        set_flag_at_offset_0x7c_1043209a(param_1,1);
        query_status_flag_0x400(param_1,1);
        bVar12 = false;
      }
    }
    else if (param_3 == 2) {
      if ((*(char *)((int)param_1 + 0x2d) != '\0') && (*(char *)((int)param_1 + 0x9c) == '\0')) {
        *(uint8_t *)((int)param_1 + 0x9d) = 0;
        set_flag_at_offset_0x7c_1043209a(param_1,0);
        call_two_helpers_with_flag(*(uint32_t *)((int)param_1 + 0x34),0,0);
        *(uint8_t *)((int)param_1 + 0x2d) = 0;
        *(uint8_t *)((int)param_1 + 0x2c) = 0;
      }
      cls_1059f170_new((void*)(auStack_b0));
      cls_1059f170_new((void*)(auStack_9c));
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      copy_five_values_between_objects((int)param_1,auStack_b0);
      update_status_flags_from_params(*(int *)((int)param_1 + 0x30),auStack_b0,1);
      uVar10 = *(uint32_t *)((int)param_1 + 0x34);
      uVar7 = get_standby_timeout_ms(*(uint32_t *)((int)param_1 + 0x30));
      (*(code *)0x104aa01e/*ROM*/)(uVar10,uVar7);
      set_flg_obj((uint32_t *)((int)param_1 + 0x7c));
      cls_1059f170_destructor(auStack_9c,2);
      cls_1059f170_destructor(auStack_b0,2);
      bVar12 = false;
    }
    else if (param_3 == 3) {
      cls_1059f170_new((void*)(auStack_7c));
      cls_1059f170_new((void*)(auStack_68));
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      copy_five_values_between_objects((int)param_1,auStack_7c);
      update_status_flags_from_params(*(int *)((int)param_1 + 0x30),auStack_7c,1);
      uVar10 = *(uint32_t *)((int)param_1 + 0x34);
      uVar7 = get_standby_timeout_ms(*(uint32_t *)((int)param_1 + 0x30));
      (*(code *)0x104aa01e/*ROM*/)(uVar10,uVar7);
      iVar2 = read_first_word_10433098(auStack_7c);
      if (((iVar2 == 2) &&
          (piVar8 = (int *)app_mode_activate(*(uint32_t *)((int)param_1 + 0x38),2),
          piVar8 != (int *)0x0)) &&
         (iVar2 = (((vtbl_entry*)(*piVar8))[5].fn)((int)((vtbl_entry*)(*piVar8))[5].adj + (int)piVar8),
         iVar2 != 0)) {
        cls_105a8a1c_new((void*)(auStack_48));
        copy_struct_under_semaphore((int)param_1,auStack_48);
        (((vtbl_entry*)(*piVar8))[6].fn)((int)((vtbl_entry*)(*piVar8))[6].adj + (int)piVar8,auStack_48);
        cls_105a8a1c_delete((void*)(auStack_48),2);
      }
      set_flg_obj((uint32_t *)((int)param_1 + 0x7c));
      cls_1059f170_destructor(auStack_68,2);
      cls_1059f170_destructor(auStack_7c,2);
      bVar12 = false;
    }
    else {
      bVar12 = false;
    }
  }
  else {
    bVar12 = false;
    if (param_2 == 0x2000001) {
      iVar2 = execute_power_off_sequence_10432a9c(param_1,param_3);
      bVar12 = iVar2 != 0;
    }
    else if (param_2 == 0x2000002) {
      dispatch_event_with_timeout_10435380(*(uint32_t *)((int)param_1 + 0x30),0,0);
    }
  }
  return bVar12;
}
