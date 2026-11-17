/* @k10d sig_sem_obj @ 0x10459eec
 * name: verified (structural evidence: d313: 0x10010b38 checks the id against the sem table 0x10011d14 and wakes the queued waiter; paired with twai_sem_obj in every lock/unlock pair)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Release a semaphore object via kernel sig_sem 0x10010b38 (wakes a waiter or increments
 *   the count); true on E_OK.
 * summary:
 *   VERIFIED: d313: 0x10010b38 checks the id against the sem table 0x10011d14 and wakes the
 *   queued waiter; paired with twai_sem_obj in every lock/unlock pair
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool sig_sem_obj(uint32_t *param_1)

{
  int iVar1;
  
  iVar1 = kernel_sig_sem((int)(short)*param_1);
  return iVar1 == 0;
}
