/* @k10d twai_sem_obj @ 0x10459f06
 * name: verified (structural evidence: d313: 0x100113dc checks context/id, blocks the task when the count is 0 and tmo=-1 (TCB state 2); used as lock by 0x104314a2/0x10431ed4/0x10492c36)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Acquire a semaphore object (id in its first halfword) with timeout (negative = forever)
 *   via kernel twai_sem 0x100113dc; true on E_OK.
 * summary:
 *   VERIFIED: d313: 0x100113dc checks context/id, blocks the task when the count is 0 and
 *   tmo=-1 (TCB state 2); used as lock by 0x104314a2/0x10431ed4/0x10492c36
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool twai_sem_obj(uint32_t *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    iVar1 = __trap_kernel_twai_sem((int)(short)*param_1,0xffffffff);
  }
  else {
    iVar1 = __trap_kernel_twai_sem((int)(short)*param_1, param_2);
  }
  return iVar1 == 0;
}
