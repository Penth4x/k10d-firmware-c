/* @k10d run_mode_event_loop @ 0x104139d2
 * name: verified (structural evidence: emulator trace: task 26 body; MENU from idle reaches the menu only once this loop runs)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Shooting/record mode event-loop task body (task 26): posts event 0xd00001, then loops
 *   waiting on its flag group (obj+0x1538), reading the request word at +0x152c and
 *   dispatching via process_mode_event_flags; screen-change requests parked at +0x1528 are
 *   launched here.
 * summary:
 *   VERIFIED: emulator trace: task 26 body; MENU from idle reaches the menu only once this
 *   loop runs
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_mode_event_loop(cls_1059c10c *param_1)

{
  uint8_t *puVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  uStack_14 = 0;
  set_mode_state_and_notify(param_1->field_0x50,1,0);
  *(uint *)&param_1[1].field_0x578 =
       *(uint *)&param_1[1].field_0x578 &
       (*(uint *)&param_1[1].field_0x578 & 0xfffffffe ^ 0xffffffff);
  puVar1 = (void*)(&param_1[1].field_0x580);
  eventflag_clr_flg((void*)(puVar1),0xfffffffe);
  eventflag_clr_flg(&param_1[1].field_0x588,0xffffffff);
  iVar5 = *(int *)param_1->field_0x4c;
  (((vtbl_entry*)(iVar5))[8].fn)
            ((int)param_1->field_0x4c + (int)((vtbl_entry*)(iVar5))[8].adj,&param_1->field_0x40);
  process_mode_event_flags_10418c04((uint32_t)(param_1));
  param_1->field_0x90 = 1;
  param_1->field_0x91 = 0;
  param_1[1].field_0x554 = 0;
  param_1[1].field_0x555 = 0;
  *(uint32_t *)&param_1[1].field_0x550 = 0;
  param_1[1].field_0x556 = 0;
  *(uint32_t *)&param_1[1].field_0x574 = 0;
  param_1->field_0x92 = 0;
  param_1->field_0x93 = 0;
  param_1[1].field_0x56a = 0;
  param_1->field_0x94 = 0;
  param_1[1].field_0x57c = 0;
  param_1[1].field_0x57d = 0;
  param_1[1].field_0x564 = 0;
  *(uint32_t *)&param_1[1].field_0x5cc = 0;
  param_1[1].field_0x568 = 1;
  param_1[1].field_0x558 = 1;
  uVar2 = test_mode_config_singleton();
  apply_setting_pair_to_target(uVar2,0,0);
  iVar5 = check_state_mismatch(*(uint32_t *)&param_1->field_0x5c);
  if (iVar5 == 0) {
    iVar5 = 0;
    do {
      check_kernel_call_success_10459fea();
      iVar5 = iVar5 + 1;
      if (100 < iVar5) break;
      iVar3 = check_state_mismatch(*(uint32_t *)&param_1->field_0x5c);
    } while (iVar3 == 0);
  }
  iVar5 = check_mode_flag_or_byte(param_1->field_0x50);
  if (iVar5 == 0) {
    init_mode_state_and_check((uint32_t)(param_1));
  }
  check_and_set_flag_if_zero_10417ce6((uint32_t)(param_1));
  send_exposure_timer_command((uint32_t)(param_1));
  dispatch_mode_event_flags((uint32_t)(param_1));
  set_mode_state_flag((uint32_t)(param_1),1,1);
  if (cRam8000fb95 != '\0') {
    eventflag_wai_flg((uint32_t *)puVar1,4,&uStack_14,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg((void*)(puVar1),4);
    cRam8000fb95 = '\0';
    iVar5 = *(int *)param_1->field_0x4c;
    iVar5 = (((vtbl_entry*)(iVar5))[13].fn)((int)param_1->field_0x4c + (int)((vtbl_entry*)(iVar5))[13].adj);
    if (iVar5 == 0xf) {
      settings_refresh_working_copy((char*)(param_1) ->field_0x7c);
      iVar5 = call_subroutine_at_offset_0x14_10484dc4(param_1->field_0x7c);
      if (iVar5 < 0x3e9) {
        uVar4 = iVar5 + 1;
      }
      else {
        uVar4 = 1000;
      }
      dispatch_two_mode_events(param_1->field_0x7c,uVar4 & 0xffff);
    }
    iVar5 = call_single_helper_104185ec();
    if ((iVar5 != 0) && (iVar5 = check_virtual_slot_15_result((uint32_t)(param_1)), iVar5 != 0)) {
      uStack_10 = 0;
      uStack_c = 0;
      iVar5 = *(int *)param_1->field_0x4c;
      (((vtbl_entry*)(iVar5))[14].fn)
                ((int)param_1->field_0x4c + (int)((vtbl_entry*)(iVar5))[14].adj,&uStack_10,&uStack_c);
      uStack_c = uStack_c / 10000;
      uStack_10 = uStack_10 / 10000 << 0x10 | uStack_c & 0xffff;
    }
  }
  check_two_flags_and_write_values((uint32_t)(param_1));
  store_word_at_offset_0x1500((uint32_t)(param_1),0);
  store_word_at_offset_0x1504((uint32_t)(param_1),0);
  set_flg_obj((uint32_t *)puVar1);
  while( true ) {
    do {
      puVar1 = (void*)(&param_1[1].field_0x580);
      eventflag_wai_flg((uint32_t *)puVar1,0xfcf7ffff,&uStack_14,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg((void*)(puVar1),uStack_14 & 0xfcf7ffff);
      *(uint *)&param_1[1].field_0x574 = uStack_14;
      if (((uStack_14 & 0x20) != 0) && (iVar5 = check_and_handle_mode_transition((uint32_t)(param_1)), iVar5 == 0)) {
        check_kernel_call_success_10459fea();
        set_flg_obj((uint32_t *)puVar1);
      }
      if (((*(uint *)&param_1[1].field_0x574 & 0x40) != 0) &&
         (iVar5 = check_and_trigger_pending_action((uint32_t)(param_1)), iVar5 == 0)) {
        check_kernel_call_success_10459fea();
        set_flg_obj((uint32_t *)puVar1);
      }
      if ((*(uint *)&param_1[1].field_0x574 & 2) != 0) {
        iVar5 = get_setting_by_mode_flag_104f147e(*(uint32_t *)&param_1->field_0x5c,0);
        param_1[1].field_0x56a = iVar5 == 1;
        if (param_1->field_0x91 == '\0') {
          set_mode_state_flag((uint32_t)(param_1),0,0);
        }
        else if (*(int *)&param_1[1].field_0x55c == 0) {
          set_mode_state_flag((uint32_t)(param_1),0,0);
        }
        else {
          dispatch_mode_event_request((cls_105c2050 *)&param_1->field_0x60,0x130007);
          param_1[1].field_0x56a = 0;
        }
        iVar5 = check_status_bit1(*(uint32_t *)&param_1->field_0x5c);
        if ((iVar5 == 0) && (iVar5 = test_bit_in_object_field(*(uint32_t *)&param_1->field_0x5c), iVar5 == 0))
        {
          param_1->field_0x91 = 0;
          *(uint *)&param_1[1].field_0x578 = *(uint *)&param_1[1].field_0x578 & 0xffffbfff;
        }
        else {
          *(uint *)&param_1[1].field_0x578 = *(uint *)&param_1[1].field_0x578 | 0x10000;
        }
        if (param_1->field_0x91 != '\0') {
          *(uint *)&param_1[1].field_0x578 = *(uint *)&param_1[1].field_0x578 | 0x4000;
        }
        uVar4 = *(uint *)&param_1[1].field_0x578;
        *(uint *)&param_1[1].field_0x578 = uVar4 & 0xfff7ffff;
        *(uint *)&param_1[1].field_0x578 = uVar4 & 0xffe7ffff;
        if (param_1[1].field_0x555 != '\0') {
          param_1[1].field_0x556 = 0;
        }
        param_1[1].field_0x564 = 0;
        if (param_1[1].field_0x53c == '\0') {
          check_mode_transition_preconditions((uint32_t)(param_1),1);
        }
      }
      if (((*(uint *)&param_1[1].field_0x574 & 4) != 0) && (param_1->field_0x94 != '\0')) {
        param_1->field_0x92 = 0;
        param_1[1].field_0x56a = 0;
        param_1->field_0x94 = 0;
        set_flg_obj((uint32_t *)puVar1);
        if (param_1[1].field_0x53c != '\0') {
          init_event_queue_and_send_msg((uint32_t)(param_1));
        }
        if (param_1->field_0x91 != '\0') {
          *(uint *)&param_1[1].field_0x578 = *(uint *)&param_1[1].field_0x578 & 0xffffbfff;
        }
      }
      if ((*(uint *)&param_1[1].field_0x574 & 8) != 0) {
        param_1[1].field_0x57c = 0;
        store_word_at_offset_0x1504((uint32_t)(param_1),2);
      }
      if ((*(uint *)&param_1[1].field_0x574 & 0x10) != 0) {
        param_1[1].field_0x57c = 0;
        store_word_at_offset_0x1504((uint32_t)(param_1),0);
      }
      if (((*(uint *)&param_1[1].field_0x574 & 8) != 0) &&
         ((*(uint *)&param_1[1].field_0x574 & 0x10) != 0)) {
        uVar2 = 2;
        if (param_1[1].field_0x57d == '\0') {
          uVar2 = 0;
        }
        store_word_at_offset_0x1504((uint32_t)(param_1),uVar2);
      }
      if ((*(uint *)&param_1[1].field_0x574 & 0x10000) != 0) {
        *(uint *)&param_1[1].field_0x578 = *(uint *)&param_1[1].field_0x578 | 4;
      }
      if ((*(uint *)&param_1[1].field_0x574 & 0x8000) != 0) {
        *(uint *)&param_1[1].field_0x578 = *(uint *)&param_1[1].field_0x578 | 8;
      }
      process_mode_event_flags_1041745e((uint32_t)(param_1));
      if (param_1[1].field_0x57c == '\0') {
        iVar5 = *(int *)&param_1[1].field_0x54c;
        if (iVar5 == 0) {
          process_mode_event_flags_10416f34((uint32_t)(param_1));
        }
        else if (iVar5 == 1) {
          (*(code *)0x104173f8/*ROM*/)(param_1);
        }
        else if (iVar5 == 2) {
          check_mode_state_and_dispatch((uint32_t)(param_1));
        }
        else if (iVar5 == 3) {
          (*(code *)0x1041745c/*ROM*/)(param_1);
        }
      }
    } while ((*(uint *)&param_1[1].field_0x574 & 1) == 0);
    *(uint *)&param_1[1].field_0x578 = *(uint *)&param_1[1].field_0x578 | 1;
    iVar5 = check_and_init_mode_state((uint32_t)(param_1));
    if (iVar5 != 0) break;
    check_kernel_call_success_10459fea();
    set_flg_obj((uint32_t *)&param_1[1].field_0x580);
  }
  param_1[1].field_0x558 = 0;
  uVar2 = test_mode_config_singleton();
  apply_setting_pair_to_target(uVar2,0,0);
  set_flag_and_store_byte_1041b406(param_1->field_0x4c,0);
  set_mode_state_flag((uint32_t)(param_1),0,0);
  puVar1 = (void*)(&param_1[1].field_0x588);
  eventflag_clr_flg((void*)(puVar1),2);
  invoke_virtual_slot_13_104ea3ca((cls_105c2050 *)&param_1->field_0x60);
  eventflag_wai_flg((uint32_t *)puVar1,2,&uStack_14,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void*)(puVar1),2);
  if (*(int *)&param_1[1].field_0x5ac != 1) {
    release_mode_event_resources((uint32_t)(param_1),(void*)(param_1->field_0x84));
    param_1->field_0x84 = 0;
  }
  param_1[1].field_0x557 = 0;
  eventflag_clr_flg(&param_1[1].field_0x580,1);
  *(uint32_t *)&param_1[1].field_0x578 = 0;
  set_mode_state_and_notify(param_1->field_0x50,0,0);
  return;
}
