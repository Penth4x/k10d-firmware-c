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

int * dispatch_mode_transition_event_10372a46(int *param_1,int *param_2)

{
  int iVar1;
  char cVar3;
  int *piVar2;
  uint32_t uVar4;
  
  if ((*(char *)((int)param_1 + 0x1d) != '\0') || (*(char *)((int)param_1 + 0x1e) != '\0')) {
    *(uint8_t *)((int)param_1 + 0x1d) = 0;
    *(uint8_t *)((int)param_1 + 0x1e) = 0;
    if (param_1[8] == 1) {
      check_kernel_call_success_10459fea();
      iVar1 = (*(code *)0x10373aca/*ROM*/)(param_1);
      if (iVar1 == 0) {
        param_1[9] = 1;
        (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
      }
      else {
        param_1[9] = 2;
        (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
      }
    }
    else {
      if ((param_1[8] != 2) || (iVar1 = (*(code *)0x10373aca/*ROM*/)(param_1), iVar1 == 0))
      goto LAB_10372b1c;
      iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
      if (iVar1 == 0) {
        param_1[9] = 0xc;
        (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
      }
      else {
        param_1[9] = 0xb;
        (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
      }
    }
    request_ui_sync_code_4(param_1 + 0x119);
  }
LAB_10372b1c:
  iVar1 = *param_2;
  piVar2 = param_1;
  if ((iVar1 == 1) || (iVar1 == 2)) goto code_r0x10373090;
  if (iVar1 != 4) {
    if (((iVar1 != 5) && (iVar1 == 6)) && (*(char *)(param_1 + 10) != '\0')) {
      *(uint8_t *)(param_1 + 10) = 0;
      piVar2 = (int *)dispatch_state_transition_1037354a(param_1);
    }
    goto code_r0x10373090;
  }
  iVar1 = param_1[8];
  if (iVar1 == 0) {
    if (param_2[1] != 0xc) goto code_r0x10373090;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto code_r0x10373090;
      iVar1 = param_2[1];
      if (iVar1 == 0xc) goto code_r0x10372eb6;
      if (iVar1 == 0x11) {
        param_1[8] = 1;
        param_1[9] = 1;
        (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
        request_ui_sync_code_4(param_1 + 0x119);
        *(uint8_t *)(param_1 + 10) = 0;
        write_second_field_via_helper_1036c486(param_1,100);
        uVar4 = 0;
        goto code_r0x10372f00;
      }
      if (iVar1 == 0xe) {
        if ((*(char *)((int)param_1 + 0x2a) == '\0') ||
           (iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1), iVar1 == 0)) goto code_r0x10373090;
        cVar3 = poll_for_matching_event_103737b4(param_1,0);
        if (cVar3 == '\0') {
          if (*(char *)(param_1 + 5) != '\0') goto code_r0x10373090;
          if (*(char *)(param_1 + 7) == '\0') {
            param_1[9] = 10;
            (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
          }
          else {
            param_1[9] = 9;
            (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
          }
        }
        else {
          *(uint8_t *)((int)param_1 + 0x29) = 0;
          copy_two_words_and_set_flag(param_1);
          iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
          if (iVar1 == 0) {
            param_1[9] = 0xc;
            (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
          }
          else {
            param_1[9] = 0xb;
            (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
          }
        }
code_r0x10373068:
        request_ui_sync_code_4(param_1 + 0x119);
        goto code_r0x10373090;
      }
      if (iVar1 == 0xd) {
        if (*(char *)((int)param_1 + 0x29) == '\0') {
          if (*(char *)((int)param_1 + 0x2a) == '\0') goto code_r0x10373090;
          iVar1 = check_two_short_pairs_equal(param_1);
          if (iVar1 == 0) {
            if (*(char *)(param_1 + 5) != '\0') goto code_r0x10373090;
            if (*(char *)((int)param_1 + 0x29) != '\0') {
              check_and_update_pair_fields_10373a3e(param_1);
              *(uint8_t *)((int)param_1 + 0x1f) = 0;
              goto code_r0x10372d7c;
            }
            param_1[9] = 9;
            (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
          }
          else {
            copy_two_words_and_set_flag(param_1);
            param_1[9] = 0xb;
            (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
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
        *(uint8_t *)(param_1 + 10) = 0;
        param_1[8] = 2;
        iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
        if (iVar1 == 0) {
          param_1[9] = 10;
          (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
        }
        else {
          param_1[9] = 9;
          (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
        }
        request_ui_sync_code_4(param_1 + 0x119);
        uVar4 = 1;
code_r0x10372f00:
        write_second_field_of_struct(param_1,uVar4);
        goto code_r0x10373090;
      }
      if (iVar1 == 0xe) {
        call_helper_on_struct_field_1036c4a8();
        *(uint8_t *)(param_1 + 10) = 0;
        if (*(char *)((int)param_1 + 0x2a) == '\0') {
          if (*(char *)(param_1 + 7) == '\0') {
            param_1[9] = 4;
            (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
          }
          else {
            param_1[9] = 3;
            (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
          }
        }
        else {
          iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
          if (iVar1 == 0) {
            param_1[9] = 4;
            (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
          }
          else {
            cVar3 = poll_for_matching_event_103737b4(param_1,0);
            if (cVar3 == '\0') {
              if (*(char *)(param_1 + 7) == '\0') {
                param_1[9] = 4;
                (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
              }
              else {
                param_1[9] = 3;
                (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
              }
            }
            else {
              *(uint8_t *)((int)param_1 + 0x29) = 0;
              copy_two_words_and_set_flag(param_1);
              iVar1 = (*(code *)0x1037378c/*ROM*/)(param_1);
              if (iVar1 == 0) {
                param_1[9] = 6;
                (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
              }
              else {
                param_1[9] = 5;
                (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
              }
            }
          }
        }
LAB_10372e42:
        request_ui_sync_code_4(param_1 + 0x119);
        write_second_field_via_helper_1036c486(param_1,param_1[6]);
      }
      else {
        if (iVar1 == 0xd) {
          call_helper_on_struct_field_1036c4a8();
          *(uint8_t *)(param_1 + 10) = 0;
          if (*(char *)((int)param_1 + 0x29) == '\0') {
            if (*(char *)((int)param_1 + 0x2a) == '\0') {
              param_1[9] = 7;
              (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
            }
            else {
              iVar1 = check_two_short_pairs_equal(param_1);
              if (iVar1 == 0) {
                if (*(char *)(param_1 + 5) != '\0') goto code_r0x10373090;
                if (*(char *)((int)param_1 + 0x29) != '\0') {
                  check_and_update_pair_fields_10373a3e(param_1);
                  *(uint8_t *)((int)param_1 + 0x1f) = 0;
                  goto code_r0x10372d7c;
                }
                param_1[9] = 7;
                (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
              }
              else {
                copy_two_words_and_set_flag(param_1);
                param_1[9] = 8;
                (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
              }
            }
            goto LAB_10372e42;
          }
        }
        else {
          if (iVar1 != 0xf) goto code_r0x10373090;
          call_helper_on_struct_field_1036c4a8();
          *(uint8_t *)(param_1 + 10) = 0;
        }
code_r0x10372d7c:
        uVar4 = get_or_create_singleton_object_1036c796();
        piVar2 = (int *)read_array_element_bounded(uVar4,2);
      }
      goto code_r0x10373090;
    }
  }
code_r0x10372eb6:
  *(uint8_t *)((int)param_1 + 0x15) = 1;
code_r0x10373090:
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
  }
  return piVar2;
}
