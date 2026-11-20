/* @k10d modset_task_body @ 0x104873c6
 * name: verified (structural evidence: emulator: task 36 parked at 0x104873f0; nothing posts its flag)
 * unit: 183_settings_registry (unit names are model-proposed)
 * purpose:
 *   MODSET parser task body (task 36, live and parked waiting on taskobj+0x19): on wake,
 *   runs the service-op dispatch over the flag array at taskobj+0x6d, sets taskobj+0x21
 *   with the result.
 * summary:
 *   VERIFIED: emulator: task 36 parked at 0x104873f0; nothing posts its flag
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void modset_task_body(int *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    do {
      eventflag_wai_flg(param_1 + 0x19,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(param_1 + 0x19,uStack_c);
    } while ((uStack_c & 1) == 0);
    iVar1 = service_op_dispatch((int *)(param_1),(char *)((int)param_1 + 0x6d),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    param_1[0x21] = iVar1;
    *(uint8_t *)(param_1 + 0x1b) = 1;
  } while( true );
}
