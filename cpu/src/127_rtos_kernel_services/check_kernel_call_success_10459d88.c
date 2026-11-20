/* @k10d check_kernel_call_success_10459d88 @ 0x10459d88
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Calls a kernel routine with the object's first short field and returns true if the
 *   result is zero.
 * summary:
 *   Extracts the low 16 bits of the first word of param_1 and passes them to
 *   terminate_task_by_id_100114c0. Returns a boolean indicating whether
 *   terminate_task_by_id_100114c0 returned 0. The callee is an unverified kernel wrapper in
 *   the rtos_wrappers_and_heap module, so the specific kernel operation is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool check_kernel_call_success_10459d88(uint32_t *param_1)

{
  int iVar1;
  
  iVar1 = __trap_terminate_task_by_id_100114c0((int)(short)*param_1);
  return iVar1 == 0;
}
