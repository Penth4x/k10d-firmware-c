/* @k10d dispatch_mode_transition_1043068c @ 0x1043068c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 115_mode_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_transition_1043068c(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint8_t uVar5;
  int *piVar3;
  int *piVar4;
  uint32_t uVar6;
  uintptr_t sp;
  bool bVar7;
  uint32_t auStack_3c [5];
  uint32_t auStack_28 [5];
  uint32_t uStack_14;
  uint8_t uStack_10;
  uint32_t uStack_c;
  
  ec_event_enqueue(__frv_reg_unset(4), __frv_reg_unset(5));
  query_object_state_and_set_flag(*(uint32_t *)((int)param_1 + 0x30),param_2);
  iVar1 = mode_ctrl_lock((int)param_1,0);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = check_object_state_and_invoke_slot(*(uint32_t *)((int)param_1 + 0x30),param_2);
  if (iVar1 != 0) {
    app_mode_activate(*(uint32_t *)((int)param_1 + 0x38),2);
    invoke_virtual_if_flag_clear(__frv_reg_unset(4));
  }
  iVar2 = check_two_conditions_on_object(param_1);
  if (iVar2 != 0) goto LAB_10430930;
  uVar6 = *(uint32_t *)((int)param_1 + 0x30);
  uVar5 = (((vtbl_entry*)(*param_2))[7].fn)((int)((vtbl_entry*)(*param_2))[7].adj + (int)param_2,0x2e);
  update_mode_state_if_valid(uVar6,uVar5);
  cls_1059f170_new((void*)(auStack_3c));
  cls_1059f170_new((void*)(auStack_28));
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  copy_five_values_between_objects((int)param_1,auStack_3c);
  iVar2 = read_first_word_10433098(auStack_3c);
  uVar6 = read_first_word_10433098(auStack_28);
  if ((iVar1 == 0) || (iVar2 == 3)) {
    iVar1 = clear_pointer_at_offset_0x44(*(uint32_t *)((int)param_1 + 0x30),0);
    if ((iVar1 == 0) || (iVar2 == 3)) {
      if (iVar2 == 0) {
        iVar1 = mode0_activate(param_1,auStack_3c,param_2);
        goto LAB_10430864;
      }
      if (iVar2 == 1) {
        iVar1 = mode1_activate_ready(param_1,auStack_3c,param_2);
        goto LAB_10430864;
      }
      if (iVar2 == 2) {
        iVar1 = mode2_activate(param_1,auStack_3c,param_2);
        goto LAB_10430864;
      }
      if (iVar2 == 3) {
        iVar1 = mode3_activate_menu(param_1,auStack_3c);
        goto LAB_10430864;
      }
      if (iVar2 == 4) {
        iVar1 = mode4_activate(param_1,auStack_3c,param_2);
        goto LAB_10430864;
      }
      bVar7 = true;
    }
    else {
      send_message_with_optional_payload(*(uint32_t *)((int)param_1 + 0x30),auStack_3c,1);
      write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),auStack_3c,1);
      iVar1 = 1;
LAB_10430864:
      bVar7 = iVar1 == 0;
    }
    if (bVar7) {
      piVar3 = (int *)app_mode_activate(*(uint32_t *)((int)param_1 + 0x38),iVar2);
      piVar4 = (int *)get_or_init_cached_value(*(uint32_t *)((int)param_1 + 0x38),uVar6);
      iVar1 = check_and_release_object((int)param_1,param_2,piVar3,piVar4);
      if (iVar1 == 0) {
        if ((piVar4 != (int *)0x0) &&
           (iVar1 = (((vtbl_entry*)(*piVar4))[5].fn)((int)((vtbl_entry*)(*piVar4))[5].adj + (int)piVar4),
           iVar1 != 0)) {
          (**(code **)(*piVar4 + 0x34))((int)*(short *)(*piVar4 + 0x30) + (int)piVar4,param_2);
        }
        if ((piVar3 != (int *)0x0) &&
           (iVar1 = (((vtbl_entry*)(*piVar3))[5].fn)((int)((vtbl_entry*)(*piVar3))[5].adj + (int)piVar3),
           iVar1 != 0)) {
          (**(code **)(*piVar3 + 0x34))((int)*(short *)(*piVar3 + 0x30) + (int)piVar3,param_2);
        }
      }
      else {
        mode_ctrl_on_status_h_104329b0((int)param_1,(void *)0x1);
      }
    }
    else {
      clone_object_with_sem_guard((int)param_1,auStack_3c);
    }
  }
  else {
    mode_ctrl_on_status_h_104329b0((int)param_1,(void *)0x3);
  }
  cls_1059f170_destructor(auStack_28,2);
  cls_1059f170_destructor(auStack_3c,2);
LAB_10430930:
  mode_ctrl_unlock(param_1);
  return 1;
}
