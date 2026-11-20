/* @k10d dispatch_mode_transition_event_10372a46 @ 0x10372a46
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Processes a state transition event for a camera mode object, updating status fields and
 *   invoking virtual callbacks.
 * summary:
 *   The function takes an object pointer (param_1) and an event descriptor (param_2). It
 *   checks specific byte flags in the object (offsets 0x1d, 0x1e, 0x29, 0x2a) and the
 *   current mode (param_1[8]). Based on the event type (param_2[0]) and sub-type
 *   (param_2[1]), it updates the status field (param_1[9]) with various codes (1, 2, 3, 4,
 *   5, 6, 7, 8, 9, 0xb, 0xc, 10) and calls a virtual method at slot 8 (offset 0x44). It
 *   also calls helper functions like request_ui_sync_code_4 and
 *   write_second_field_via_helper_1036c486, suggesting a complex state machine for camera
 *   modes (e.g., P, Tv, Av, M).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10372e80) overlaps instruction at (ram,0x10372e7e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_105584bc * dispatch_mode_transition_event_10372a46(cls_105584bc *param_1,int *param_2)

{
  int iVar1;
  char cVar3;
  cls_105584bc *pcVar2;
  uint32_t uVar4;
  
  if ((param_1->field_0x1d != '\0') || (param_1->field_0x1e != '\0')) {
    param_1->field_0x1d = 0;
    param_1->field_0x1e = 0;
    if (param_1->field_0x20 == 1) {
      check_kernel_call_success_10459fea();
      iVar1 = (*(code *)0x10373aca/*ROM*/)(param_1);
      if (iVar1 == 0) {
        param_1->field_0x24 = (uintptr_t)((void *)0x1);
        (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      }
      else {
        param_1->field_0x24 = (uintptr_t)((void *)0x2);
        (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      }
    }
    else {
      if ((param_1->field_0x20 != 2) || (iVar1 = (*(code *)0x10373aca/*ROM*/)(param_1), iVar1 == 0))
      goto LAB_10372b1c;
      iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
      if (iVar1 == 0) {
        param_1->field_0x24 = (uintptr_t)(&DAT_0000000c);
        (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      }
      else {
        param_1->field_0x24 = (uintptr_t)((void *)0xb);
        (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      }
    }
    request_ui_sync_code_4(&param_1->field_0x464);
  }
LAB_10372b1c:
  iVar1 = *param_2;
  pcVar2 = param_1;
  if ((iVar1 == 1) || (iVar1 == 2)) goto code_r0x10373090;
  if (iVar1 != 4) {
    if (((iVar1 != 5) && (iVar1 == 6)) && (param_1->field_0x28 != '\0')) {
      param_1->field_0x28 = 0;
      pcVar2 = (cls_105584bc *)dispatch_state_transition_1037354a(param_1);
    }
    goto code_r0x10373090;
  }
  iVar1 = param_1->field_0x20;
  if (iVar1 == 0) {
    if (param_2[1] != 0xc) goto code_r0x10373090;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto code_r0x10373090;
      iVar1 = param_2[1];
      if (iVar1 == 0xc) goto code_r0x10372eb6;
      if (iVar1 == 0x11) {
        param_1->field_0x20 = 1;
        param_1->field_0x24 = (uintptr_t)((void *)0x1);
        (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
        request_ui_sync_code_4(&param_1->field_0x464);
        param_1->field_0x28 = 0;
        write_second_field_via_helper_1036c486(param_1,100);
        uVar4 = 0;
        goto code_r0x10372f00;
      }
      if (iVar1 == 0xe) {
        if ((param_1->field_0x2a == '\0') || (iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1), iVar1 == 0))
        goto code_r0x10373090;
        cVar3 = poll_for_matching_event_103737b4(param_1,0);
        if (cVar3 == '\0') {
          if (param_1->field_0x14 != '\0') goto code_r0x10373090;
          if (param_1->field_0x1c == '\0') {
            param_1->field_0x24 = (uintptr_t)((void *)0xa);
            (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
          }
          else {
            param_1->field_0x24 = (uintptr_t)((void *)0x9);
            (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
          }
        }
        else {
          param_1->field_0x29 = 0;
          copy_two_words_and_set_flag(param_1);
          iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
          if (iVar1 == 0) {
            param_1->field_0x24 = (uintptr_t)(&DAT_0000000c);
            (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
          }
          else {
            param_1->field_0x24 = (uintptr_t)((void *)0xb);
            (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
          }
        }
code_r0x10373068:
        request_ui_sync_code_4(&param_1->field_0x464);
        goto code_r0x10373090;
      }
      if (iVar1 == 0xd) {
        if (param_1->field_0x29 == '\0') {
          if (param_1->field_0x2a == '\0') goto code_r0x10373090;
          iVar1 = check_two_short_pairs_equal(param_1);
          if (iVar1 == 0) {
            if (param_1->field_0x14 != '\0') goto code_r0x10373090;
            if (param_1->field_0x29 != '\0') {
              check_and_update_pair_fields_10373a3e(param_1);
              param_1->field_0x1f = 0;
              goto code_r0x10372d7c;
            }
            param_1->field_0x24 = (uintptr_t)((void *)0x9);
            (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
          }
          else {
            copy_two_words_and_set_flag(param_1);
            param_1->field_0x24 = (uintptr_t)((void *)0xb);
            (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
          }
          goto code_r0x10373068;
        }
      }
      else if (iVar1 != 0xf) goto code_r0x10373090;
      goto code_r0x10372d7c;
    }
    iVar1 = param_2[1];
    if (iVar1 != 0xc) {
      if (iVar1 == 0x11) {
        call_helper_on_struct_field_1036c4a8();
        param_1->field_0x28 = 0;
        param_1->field_0x20 = 2;
        iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
        if (iVar1 == 0) {
          param_1->field_0x24 = (uintptr_t)((void *)0xa);
          (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
        }
        else {
          param_1->field_0x24 = (uintptr_t)((void *)0x9);
          (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
        }
        request_ui_sync_code_4(&param_1->field_0x464);
        uVar4 = 1;
code_r0x10372f00:
        write_second_field_of_struct(param_1,uVar4);
        goto code_r0x10373090;
      }
      if (iVar1 == 0xe) {
        call_helper_on_struct_field_1036c4a8();
        param_1->field_0x28 = 0;
        if (param_1->field_0x2a == '\0') {
          if (param_1->field_0x1c == '\0') {
            param_1->field_0x24 = (uintptr_t)((void *)0x4);
            (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
          }
          else {
            param_1->field_0x24 = (uintptr_t)((void *)0x3);
            (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
          }
        }
        else {
          iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
          if (iVar1 == 0) {
            param_1->field_0x24 = (uintptr_t)((void *)0x4);
            (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
          }
          else {
            cVar3 = poll_for_matching_event_103737b4(param_1,0);
            if (cVar3 == '\0') {
              if (param_1->field_0x1c == '\0') {
                param_1->field_0x24 = (uintptr_t)((void *)0x4);
                (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                          ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
              }
              else {
                param_1->field_0x24 = (uintptr_t)((void *)0x3);
                (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                          ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
              }
            }
            else {
              param_1->field_0x29 = 0;
              copy_two_words_and_set_flag(param_1);
              iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
              if (iVar1 == 0) {
                param_1->field_0x24 = (uintptr_t)((void *)0x6);
                (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                          ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
              }
              else {
                param_1->field_0x24 = (uintptr_t)((void *)0x5);
                (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                          ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
              }
            }
          }
        }
LAB_10372e42:
        request_ui_sync_code_4(&param_1->field_0x464);
        write_second_field_via_helper_1036c486(param_1,param_1->field_0x18);
      }
      else {
        if (iVar1 == 0xd) {
          call_helper_on_struct_field_1036c4a8();
          param_1->field_0x28 = 0;
          if (param_1->field_0x29 == '\0') {
            if (param_1->field_0x2a == '\0') {
              param_1->field_0x24 = (uintptr_t)((void *)0x7);
              (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
            }
            else {
              iVar1 = check_two_short_pairs_equal(param_1);
              if (iVar1 == 0) {
                if (param_1->field_0x14 != '\0') goto code_r0x10373090;
                if (param_1->field_0x29 != '\0') {
                  check_and_update_pair_fields_10373a3e(param_1);
                  param_1->field_0x1f = 0;
                  goto code_r0x10372d7c;
                }
                param_1->field_0x24 = (uintptr_t)((void *)0x7);
                (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                          ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
              }
              else {
                copy_two_words_and_set_flag(param_1);
                param_1->field_0x24 = (uintptr_t)((void *)0x8);
                (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                          ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
              }
            }
            goto LAB_10372e42;
          }
        }
        else {
          if (iVar1 != 0xf) goto code_r0x10373090;
          call_helper_on_struct_field_1036c4a8();
          param_1->field_0x28 = 0;
        }
code_r0x10372d7c:
        uVar4 = get_or_create_singleton_object_1036c796();
        pcVar2 = (cls_105584bc *)read_array_element_bounded(uVar4,2);
      }
      goto code_r0x10373090;
    }
  }
code_r0x10372eb6:
  param_1->field_0x15 = 1;
code_r0x10373090:
  if (param_1->field_0x15 != '\0') {
    forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
  }
  return pcVar2;
}
