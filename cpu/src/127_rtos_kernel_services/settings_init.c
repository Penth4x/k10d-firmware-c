/* @k10d settings_init @ 0x10459f5a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed create_or_wait_semaphore)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Creates a semaphore if param_2 is zero, otherwise waits on the semaphore id in param_2,
 *   returning a normalized status code.
 * summary:
 *   The function stores param_2, param_3, and param_4 into a local structure. If param_2 is
 *   0, it calls find_free_queue_slot_1000da18 to create a semaphore object and stores the
 *   resulting id in *param_1. If param_2 is non-zero, it calls validate_and_dispatch_event
 *   with the lower halfword of param_2, likely to wait on an existing semaphore. The return
 *   value is normalized: 0 remains 0, -0x21 (E_TIMEOUT) becomes -1, and any other error
 *   becomes -3. This fits the pattern of a wrapper around µITRON semaphore primitives
 *   (cre_sem/twai_sem) within the RTOS wrappers module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int settings_init(int *param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint32_t uStack_8;
  
  uStack_10 = 0;
  *param_1 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  if (param_2 == 0) {
    iVar1 = find_free_queue_slot_1000da18(&uStack_10);
    if (0 < iVar1) {
      *param_1 = iVar1;
      return iVar1;
    }
  }
  else {
    iVar1 = validate_and_dispatch_event((int)(short)param_2,&uStack_10);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (iVar1 == -0x21) {
    iVar1 = -1;
  }
  else {
    iVar1 = -3;
  }
  return iVar1;
}
