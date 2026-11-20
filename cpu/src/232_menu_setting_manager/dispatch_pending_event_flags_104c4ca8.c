/* @k10d dispatch_pending_event_flags_104c4ca8 @ 0x104c4ca8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_pending_event_flags_104c4ca8(cls_105b9574 *param_1)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint uStack_c;
  
  do {
    uStack_c = 0;
    puVar1 = &param_1->field_0x34;
    eventflag_wai_flg(puVar1,0xffffffff,&uStack_c,_DAT_105a2af0/*ROM*/);
    if ((uStack_c & 1) != 0) {
      process_sensor_readout_buffer_104cb0b2((int)(param_1));
      eventflag_clr_flg(puVar1,1);
    }
    if ((uStack_c & 2) != 0) {
      check_and_set_flag_0x214_104cb468((int)(param_1));
      eventflag_clr_flg(puVar1,2);
    }
    if ((uStack_c & 4) != 0) {
      check_and_set_flag_0x214_104cb49e((int)(param_1));
      eventflag_clr_flg(puVar1,4);
    }
    if ((uStack_c & 8) != 0) {
      store_query_result_and_flag((int)(param_1));
      eventflag_clr_flg(puVar1,8);
    }
    if ((uStack_c & 0x10) != 0) {
      set_object_flags_and_call_helper((int)(param_1));
      eventflag_clr_flg(puVar1,0x10);
    }
    if ((uStack_c & 0x20) != 0) {
      store_value_and_constant_in_struct((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x20);
    }
    if ((uStack_c & 0x40) != 0) {
      check_and_set_flag_0x214_104cb55e((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x40);
    }
    if ((uStack_c & 0x80) != 0) {
      update_object_state_flags_104cb594((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x80);
    }
    if ((uStack_c & 0x100) != 0) {
      store_value_at_offset_0x214((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x100);
    }
    if ((uStack_c & 0x200) != 0) {
      check_flag_and_call_helper_104cb608((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x200);
    }
    if ((uStack_c & 0x400) != 0) {
      dispatch_state_machine_on_param((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x400);
    }
    if ((uStack_c & 0x800) != 0) {
      dispatch_mode_transition_handler_104cbb46((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x800);
    }
    if ((uStack_c & 0x1000) != 0) {
      poll_status_and_dispatch_event_104cbf40((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x1000);
    }
    if ((uStack_c & 0x2000) != 0) {
      poll_status_and_set_error_code_104cc064((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x2000);
    }
    if ((uStack_c & 0x4000) != 0) {
      poll_status_and_dispatch_event_104cc18c((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x4000);
    }
    if ((uStack_c & 0x8000) != 0) {
      poll_status_and_set_error_code_104cc298((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x8000);
    }
    if ((uStack_c & 0x10000) != 0) {
      set_status_code_and_flag((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x10000);
    }
    if ((uStack_c & 0x20000) != 0) {
      process_buffer_state_transition_104cc440((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x20000);
    }
    if ((uStack_c & 0x40000) != 0) {
      process_sensor_readout_request_104cc5aa((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x40000);
    }
    if ((uStack_c & 0x80000) != 0) {
      init_object_with_seven_allocs((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x80000);
    }
    if ((uStack_c & 0x100000) != 0) {
      process_sensor_readout_event_104ccbe0((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x100000);
    }
    if ((uStack_c & 0x200000) != 0) {
      process_sensor_readout_event_104cd384((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x200000);
    }
    if ((uStack_c & 0x400000) != 0) {
      process_sensor_readout_buffers((int)(param_1));
      eventflag_clr_flg(&param_1->field_0x34,0x400000);
    }
    invoke_listener_slot_two((int *)&param_1->field_0x1c);
  } while( true );
}
