/* @k10d call_helper_with_fixed_args_10462f86 @ 0x10462f86
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x1a, NULL, and 0,
 *   returning its result.
 * summary:
 *   The function is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait along with a fixed set of constants (0x1a, NULL, 0). It
 *   returns the callee's return value directly. No other side effects or state
 *   modifications are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_10462f86(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x1a,(void *)0x0,0);
  return iVar1;
}
