/* @k10d process_mode_transition_sequence @ 0x104320bc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Executes a complex state machine to handle camera mode changes, including UI updates
 *   and object lifecycle management.
 * summary:
 *   The function locks a mode control object, initializes two instances of class
 *   cls_1059f170, and performs a series of checks and state transitions based on the
 *   current camera mode and object states. It interacts with a virtual object (piVar7) to
 *   query and modify states, potentially triggering UI updates via modset_dumper_menu_gate
 *   and other display functions. Finally, it cleans up the temporary objects and unlocks
 *   the mode control.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1043225c) overlaps instruction at (ram,0x1043225a)
    */

uint32_t process_mode_transition_sequence(void *param_1)

{
  int iVar1;
  bool bVar5;
  int iVar2;
  bool bVar6;
  int iVar3;
  uint32_t uVar4;
  cls_105a8a1c *pcVar7;
  uintptr_t sp;
  cls_1059f170 cStack_84;
  cls_1059f170 cStack_70;
  int iStack_5c;
  uint8_t uStack_58;
  uint32_t uStack_54;
  cls_105a8a1c acStack_50 [16];
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  mode_ctrl_lock((int)param_1,0);
  copy_sr_debug_flags_to_struct(*(void **)((int)param_1 + 0x30));
  clear_struct_field_at_0x3c(param_1);
  iVar1 = get_byte_from_struct_field();
  if (iVar1 == 0) {
    set_flag_and_call_helper_104351f0(*(void **)((int)param_1 + 0x30),1);
    bVar5 = check_bit2_of_field_at_offset_0x7c(param_1);
  }
  else {
    bVar5 = check_bit2_of_field_at_offset_0x7c(param_1);
    call_helper_on_struct_field_10434076(*(uint32_t *)((int)param_1 + 0x30));
  }
  init_object_and_check_field(*(void **)((int)param_1 + 0x30));
  wait_for_flag_then_clear_10431fa6(param_1,1);
  cls_1059f170_new(&cStack_84);
  cls_1059f170_new(&cStack_70);
  uStack_58 = 0;
  uStack_54 = 0;
  iStack_5c = (int)param_1 + 0x20;
  store_value_to_pointer_1043309c((void*)(&cStack_84),2);
  write_field_at_offset_four_104330a0(&cStack_84,0);
  store_value_at_offset_eight_104330a6(&cStack_84,0);
  set_byte_at_offset_0xc(&cStack_84,0);
  store_value_to_pointer_1043309c((void*)(&cStack_70),3);
  write_field_at_offset_four_104330a0(&cStack_70,0);
  store_value_at_offset_eight_104330a6(&cStack_70,0);
  set_byte_at_offset_0xc(&cStack_70,0);
  iVar1 = (*(code *)0x104aa1ee/*ROM*/)(*(uint32_t *)((int)param_1 + 0x34));
  dispatch_param_three_action((int)param_1,&cStack_84,iVar1);
  if (iVar1 == 1) {
    execute_power_off_sequence_1043274e(param_1);
  }
  iVar1 = (*(code *)0x104aa1aa/*ROM*/)(*(uint32_t *)((int)param_1 + 0x34));
  if ((iVar1 != 3) && (iVar1 != 1)) {
    refresh_settings_if_dirty_10434368(*(uint32_t *)((int)param_1 + 0x30));
  }
  iVar2 = check_first_run_flags(*(uint32_t *)((int)param_1 + 0x30));
  wait_for_flag_and_clear(param_1,1);
  cls_105a8a1c_new(acStack_50);
  bVar6 = check_buffer_flag_bit6(param_1,1);
  pcVar7 = (cls_105a8a1c *)0x0;
  if (bVar6) {
    copy_struct_under_semaphore((int)param_1,acStack_50);
    pcVar7 = acStack_50;
  }
  if (pcVar7 == (cls_105a8a1c *)0x0) {
    refresh_settings_and_propagate_mode(*(uint32_t *)((int)param_1 + 0x30),0, __frv_reg_unset(6));
    if (bVar5 == false) {
      write_field_at_offset_0x5c(*(uint32_t *)((int)param_1 + 0x30),1);
      uStack_c = 0;
      iVar2 = modset_dumper_menu_gate(*(uint32_t *)((int)param_1 + 0x38),&uStack_c);
      if (iVar2 == 0) {
        init_and_set_value_10434d94(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,2);
      }
      else {
        write_field_at_offset_four_104330a0(&cStack_84,uStack_c);
        send_message_with_payload(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,0);
      }
      write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
    }
    else {
      write_param_to_buffer(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
      write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
      release_five_mode_objects(*(uint32_t *)((int)param_1 + 0x38));
      reset_settings_subblocks(*(uint32_t *)((int)param_1 + 0x30));
      write_field_at_offset_0x5c(*(uint32_t *)((int)param_1 + 0x30),1);
    }
    clone_object_with_sem_guard((int)param_1,&cStack_84);
    goto code_r0x104326a8;
  }
  refresh_settings_and_propagate_mode(*(uint32_t *)((int)param_1 + 0x30),(void*)(pcVar7),1);
  iVar3 = (((vtbl_entry*)(pcVar7->field_0x0))[2].fn)
                    ((int)&pcVar7->field_0x0 + (int)((vtbl_entry*)(pcVar7->field_0x0))[2].adj,0x17);
  if (iVar3 != 0) {
    dispatch_event_with_timeout_10435380(*(uint32_t *)((int)param_1 + 0x30),2,0);
    twai_flg_obj((uint32_t *)((int)param_1 + 0x7c),0x100,(void *)0x0,5000);
    dispatch_event_with_timeout_10435380(*(uint32_t *)((int)param_1 + 0x30),0,0);
  }
  iVar3 = (((vtbl_entry*)(pcVar7->field_0x0))[2].fn)
                    ((int)&pcVar7->field_0x0 + (int)((vtbl_entry*)(pcVar7->field_0x0))[2].adj,0x2c);
  if (iVar3 == 0) {
    iVar3 = read_first_word_10433098(&cStack_84.field_0x0);
    if (((iVar3 == 2) &&
        (((iVar3 = (((vtbl_entry*)(pcVar7->field_0x0))[2].fn)
                             ((int)&pcVar7->field_0x0 + (int)((vtbl_entry*)(pcVar7->field_0x0))[2].adj,0)
          , iVar3 != 0 ||
          (iVar3 = (**(code **)(pcVar7->field_0x0 + 0x14))
                             ((int)&pcVar7->field_0x0 + (int)((vtbl_entry*)(pcVar7->field_0x0))[2].adj,1)
          , iVar3 != 0)) &&
         (iVar3 = (**(code **)(pcVar7->field_0x0 + 0x14))
                            ((int)&pcVar7->field_0x0 + (int)((vtbl_entry*)(pcVar7->field_0x0))[2].adj,0xc
                            ), iVar3 == 0)))) &&
       (iVar3 = (*(code *)0x10433ce8/*ROM*/)(*(uint32_t *)((int)param_1 + 0x30)), iVar3 == 0)) {
      send_message_with_optional_payload(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
    }
    else {
      iVar3 = (*(code *)0x10433d00/*ROM*/)(*(uint32_t *)((int)param_1 + 0x30));
      if ((iVar3 == 0) ||
         (iVar3 = call_helper_if_gate_passes(*(uint32_t *)((int)param_1 + 0x38),pcVar7), iVar3 == 0)) {
        iVar3 = (*(code *)0x10433cfa/*ROM*/)();
        if ((iVar3 != 0) ||
           ((iVar3 = (((vtbl_entry*)(pcVar7->field_0x0))[2].fn)
                               ((int)&pcVar7->field_0x0 + (int)((vtbl_entry*)(pcVar7->field_0x0))[2].adj,
                                0xc), iVar3 != 0 ||
            (iVar3 = (*(code *)0x10433ce8/*ROM*/)(*(uint32_t *)((int)param_1 + 0x30)), iVar3 != 0)))) {
          uStack_10 = 0;
          write_field_at_offset_0x5c(*(uint32_t *)((int)param_1 + 0x30),1);
          iVar3 = (*(code *)0x10433cfa/*ROM*/)(*(uint32_t *)((int)param_1 + 0x30));
          if ((iVar3 == 0) ||
             (iVar3 = get_value_if_flag_set_1042fdbe(*(uint32_t *)((int)param_1 + 0x38)), iVar3 == 0)) {
            iVar3 = modset_dumper_menu_gate(*(uint32_t *)((int)param_1 + 0x38),&uStack_10);
            if (iVar3 != 0) {
              write_field_at_offset_four_104330a0(&cStack_84,uStack_10);
              send_message_with_payload(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,0);
            }
          }
          else {
            write_param_to_buffer(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
            write_value_to_struct_offset_104351c2(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
          }
        }
      }
      else {
        send_message_with_payload(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
        write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
      }
      iVar3 = read_first_word_10433098(&cStack_84.field_0x0);
      if ((iVar3 == 3) || (iVar3 = read_first_word_10433098(&cStack_70.field_0x0), iVar3 != 3))
      goto code_r0x104324fa;
      if (iVar2 == 0) {
        if (((iVar1 == 3) || (iVar1 == 1)) ||
           (iVar2 = process_settings_event(*(uint32_t *)((int)param_1 + 0x30),(void*)(pcVar7)), iVar2 == 0))
        goto code_r0x104324fa;
        iVar2 = 5;
      }
      else {
        iVar2 = 2;
      }
      init_and_set_value_10434d94(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,iVar2);
    }
    write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
  }
  else {
    write_param_to_buffer(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,1);
    dispatch_mode_change_request_10435152(*(uint32_t *)((int)param_1 + 0x30),&cStack_84,4);
  }
code_r0x104324fa:
  iVar2 = read_first_word_10433098(&cStack_84.field_0x0);
  if ((iVar2 != 2) ||
     ((iVar2 = (((vtbl_entry*)(pcVar7->field_0x0))[3].fn)
                         ((int)&pcVar7->field_0x0 + (int)((vtbl_entry*)(pcVar7->field_0x0))[3].adj,0),
      iVar2 != 0 &&
      (iVar2 = (**(code **)(pcVar7->field_0x0 + 0x1c))
                         ((int)&pcVar7->field_0x0 + (int)((vtbl_entry*)(pcVar7->field_0x0))[3].adj,1),
      iVar2 != 0)))) {
    release_five_mode_objects(*(uint32_t *)((int)param_1 + 0x38));
  }
  iVar2 = (*(code *)0x104aa1b0/*ROM*/)(*(uint32_t *)((int)param_1 + 0x34));
  if ((iVar2 == 0) || (iVar2 = read_first_word_10433098(&cStack_84.field_0x0), iVar2 != 2)) {
    reset_settings_subblocks(*(uint32_t *)((int)param_1 + 0x30));
    write_field_at_offset_0x5c(*(uint32_t *)((int)param_1 + 0x30),1);
  }
  else {
    store_byte_at_offset_0x40(param_1,1);
  }
  iVar2 = check_object_state_and_invoke_slot(*(uint32_t *)((int)param_1 + 0x30),(void*)(pcVar7));
  if ((iVar2 == 0) || (iVar2 = read_first_word_10433098(&cStack_84.field_0x0), iVar2 == 3)) {
    clone_object_with_sem_guard((int)param_1,&cStack_84);
  }
  else {
    store_byte_at_offset_0x40(param_1,0);
    write_field_at_offset_0x5c(*(uint32_t *)((int)param_1 + 0x30),1);
    mode_ctrl_on_status_h_104329b0((int)param_1,(void *)0x3);
  }
code_r0x104326a8:
  iVar2 = read_first_word_10433098(&cStack_84.field_0x0);
  if (iVar2 != 2) {
    write_field_at_offset_0x5c(*(uint32_t *)((int)param_1 + 0x30),1);
    uVar4 = app_mode_activate(*(uint32_t *)((int)param_1 + 0x38),2);
    init_system_if_flag_set(uVar4,0);
  }
  if ((((*(char *)((int)param_1 + 0x2c) == '\0') &&
       (iVar2 = check_setting_0x9e_enabled(*(uint32_t *)((int)param_1 + 0x30)), iVar2 != 0)) && (iVar1 != 1)) &&
     (iVar1 != 3)) {
    call_subroutine_with_offset_0x34(*(uint32_t *)((int)param_1 + 0x30));
  }
  mode_ctrl_unlock(param_1);
  cls_105a8a1c_delete(acStack_50,2);
  cls_1059f170_destructor(&cStack_70,2);
  cls_1059f170_destructor(&cStack_84,2);
  return 1;
}
