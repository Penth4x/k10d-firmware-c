/* @k10d check_kernel_call_success_10459fea @ 0x10459fea
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Calls an unknown kernel wrapper and returns true if it reports success (zero).
 * summary:
 *   Invokes allocate_kernel_object_1000e4e0 and compares its return value to zero,
 *   returning a boolean. The callee is not identified, so the specific kernel operation is
 *   unknown. This is a thin one-call wrapper in the RTOS wrappers module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool check_kernel_call_success_10459fea(void)

{
  int iVar1;
  
  iVar1 = __trap_allocate_kernel_object_1000e4e0(__frv_reg_unset(4));
  return iVar1 == 0;
}
