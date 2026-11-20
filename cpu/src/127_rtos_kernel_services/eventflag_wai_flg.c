/* @k10d eventflag_wai_flg @ 0x10459708
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed wai_flg_obj)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Wait for event-flag bits (pattern in param_2) on the flag object's id via kernel
 *   wai_flg; returns true on E_OK.
 * summary:
 *   Clamps param_4 to a valid wait-mode range, then calls __trap_kernel_wai_flg_svc(kernel
 *   wai_flg) with the flag id from *param_1, the wait pattern param_2, a result pointer
 *   (param_3 or a local), and the mode. Returns whether the kernel call succeeded (iVar1 ==
 *   0). Sits alongside set_flg_obj and twai_flg_obj in the rtos_wrappers module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool eventflag_wai_flg(uint32_t *param_1,uint32_t param_2,uint32_t *param_3,int param_4)

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
  if (param_3 == (uint32_t *)0x0) {
    iVar1 = __trap_kernel_wai_flg_svc((int)(short)*param_1,param_2,1,&uStack_8,param_4);
  }
  else {
    iVar1 = __trap_kernel_wai_flg_svc((int)(short)*param_1,param_2,1,param_3,param_4);
  }
  return iVar1 == 0;
}
