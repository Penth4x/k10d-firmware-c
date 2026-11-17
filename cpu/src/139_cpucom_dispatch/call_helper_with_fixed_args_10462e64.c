/* @k10d call_helper_with_fixed_args_10462e64 @ 0x10462e64
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x10, NULL, and 0,
 *   returning its result.
 * summary:
 *   This is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait along with four fixed arguments: the next pointer
 *   (param_1 + 1), the constant 0x10, a null pointer, and zero. It returns the callee's
 *   return value directly. No other side effects or global accesses are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_10462e64(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x10,(void *)0x0,0);
  return iVar1;
}
