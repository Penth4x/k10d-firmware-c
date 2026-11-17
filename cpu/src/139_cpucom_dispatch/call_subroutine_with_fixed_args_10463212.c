/* @k10d call_subroutine_with_fixed_args_10463212 @ 0x10463212
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Invokes issue_indexed_command_and_wait with param_1, param_1+1, 0x31, NULL, and 0,
 *   returning the result.
 * summary:
 *   The function is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait along with four fixed arguments. It returns the value
 *   produced by the callee directly. No other side effects or memory accesses are visible
 *   in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_subroutine_with_fixed_args_10463212(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x31,(void *)0x0,0);
  return iVar1;
}
