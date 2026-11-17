/* @k10d call_helper_with_fixed_args_10462e7c @ 0x10462e7c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x11, NULL, and 0,
 *   returning its result.
 * summary:
 *   The function is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait. It passes the pointer and the next pointer (param_1 +
 *   1) as the first two arguments, followed by the constant 0x11, a NULL pointer, and 0.
 *   The return value of the callee is returned directly. No other side effects or global
 *   accesses are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_10462e7c(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x11,(void *)0x0,0);
  return iVar1;
}
