/* @k10d twai_flg_obj @ 0x1045975a
 * name: verified (structural evidence: d313: body converts the timeout and calls 0x100112a4 (kernel twai_flg service); TCB shows state 3 + ticks remaining (+0x34) while blocked here; old name send_mailbox_message was wrong)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Wait for event-flag bits with a timeout (ticks; negative = forever, 0 = poll) via
 *   kernel twai_flg 0x100112a4; returns true on E_OK.
 * summary:
 *   VERIFIED: d313: body converts the timeout and calls 0x100112a4 (kernel twai_flg
 *   service); TCB shows state 3 + ticks remaining (+0x34) while blocked here; old name
 *   send_mailbox_message was wrong
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool twai_flg_obj(uint32_t *param_1,uint32_t param_2,void *param_3,int param_4)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_8;
  
  if (param_4 < 1) {
    if (param_4 < 0) {
      param_4 = -1;
    }
    else {
      param_4 = 0;
    }
  }
  uStack_8 = 0;
  if (param_3 == (void *)0x0) {
    iVar1 = kernel_wai_flg_svc((int)(short)*param_1,param_2,0,&uStack_8,param_4);
  }
  else {
    iVar1 = kernel_wai_flg_svc((int)(short)*param_1,param_2,0,param_3,param_4);
  }
  return iVar1 == 0;
}
