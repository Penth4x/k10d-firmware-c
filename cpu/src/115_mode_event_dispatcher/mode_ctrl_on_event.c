/* @k10d mode_ctrl_on_event @ 0x10430532
 * name: verified (structural evidence: d313: decompile switch; registered in the settings manager's listener table for 'H' and 'B' (snapshot of 0x8054d7bc+0x1ac))
 * unit: 115_mode_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Mode controller event handler: 0x10002/3 set flag bits 2/4, 0xa0009 ('H' status) and
 *   0xa000b ('B' status) handlers, 0x50000/0xd000x/0xe0001 transitions.
 * summary:
 *   VERIFIED: d313: decompile switch; registered in the settings manager's listener table
 *   for 'H' and 'B' (snapshot of 0x8054d7bc+0x1ac)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10430548) overlaps instruction at (ram,0x10430546)
    */

uint32_t mode_ctrl_on_event(int param_1,int param_2,uint32_t *param_3)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 == 0xa0009) {
    mode_ctrl_on_status_h_10432030(param_1);
  }
  else if (param_2 < 0xa000a) {
    if (param_2 == 0x10001) {
      pvVar2 = (void *)param_3[4];
      console_printf(&DAT_1059f180/*ROM*/,(void *)*param_3,(void *)(uint)*(byte *)(param_3 + 3),pvVar2);
      console_printf(&DAT_1059f1b4/*ROM*/,(void *)(uint)*(byte *)(param_3 + 1),(void *)param_3[2],pvVar2);
    }
    else if ((param_2 == 0x10002) || (param_2 == 0x10003)) {
      set_flg_obj((uint32_t *)(param_1 + 0x7c), 0x4);
    }
    else if (param_2 == 0x50000) {
      mode_ctrl_process_event(param_1,param_3);
    }
  }
  else if (param_2 == 0xd0002) {
    iVar1 = check_two_byte_flags_clear(param_1);
    if (iVar1 != 0) {
      set_flag_and_call_two_helpers_10432c64(param_1);
    }
  }
  else if (param_2 < 0xd0003) {
    if (param_2 == 0xa000b) {
      mode_ctrl_on_status_b(param_1);
      if (*(char *)(param_1 + 0xa4) != '\0') {
        process_mode_setting_updates(*(uint32_t *)(param_1 + 0x30),0);
      }
    }
    else if (param_2 == 0xd0001) {
      mode_ctrl_on_status_h_104329b0(param_1,param_3);
    }
  }
  else if (param_2 == 0xd0004) {
    ec_post_evt_0x10(param_1);
  }
  else if ((param_2 == 0xe0001) && (param_3 == (uint32_t *)0x1)) {
    mode_ctrl_on_status_h_104329b0(param_1,(void *)0x2);
  }
  return 1;
}
