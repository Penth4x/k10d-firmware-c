/* @k10d dispatch_event_with_timeout_10435380 @ 0x10435380
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Selects a status code based on param_2, sends it via store_value_and_set_flag_104cf23a,
 *   and waits for a flag with a timeout.
 * summary:
 *   The function branches on param_2 to determine a status value (1, 2, 7, or 0), calling
 *   0x10433ce8 if param_2 is 2. It then calls eventflag_clr_flg on a pointer derived from
 *   param_1, followed by store_value_and_set_flag_104cf23a which likely sends a message or
 *   command. If store_value_and_set_flag_104cf23a succeeds and param_3 is positive, it
 *   calls check_kernel_call_success_10459fea and waits on a flag object (twai_flg_obj) with
 *   a timeout. Finally, it resets the status to 0 via store_value_and_set_flag_104cf23a and
 *   clears the flag if the wait succeeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_with_timeout_10435380(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  if (param_2 == 1) {
    uVar2 = 1;
  }
  else if (param_2 == 2) {
    iVar1 = (*(code *)0x10433ce8/*ROM*/)(param_1);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    uVar2 = 0;
  }
  puVar3 = (uint32_t *)(param_1 + 0x38);
  eventflag_clr_flg(puVar3,0x40);
  iVar1 = store_value_and_set_flag_104cf23a((int)(*(uint32_t *)(param_1 + 0x60)),(void *)(param_1 + 4),(int)(uVar2));
  if ((iVar1 != 0) && (twai_flg_obj(puVar3,0x40,(void *)0x0,_DAT_105a2af0/*ROM*/), 0 < param_3)) {
    check_kernel_call_success_10459fea();
    eventflag_clr_flg(puVar3,0x40);
    iVar1 = store_value_and_set_flag_104cf23a((int)(*(uint32_t *)(param_1 + 0x60)),(void *)(param_1 + 4),(int)(0));
    if (iVar1 != 0) {
      twai_flg_obj(puVar3,0x40,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
  }
  return;
}
