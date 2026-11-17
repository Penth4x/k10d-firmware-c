/* @k10d call_helper_with_fixed_args_10463450 @ 0x10463450
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x41, NULL, and param_2,
 *   returning its result.
 * summary:
 *   This is a thin wrapper that forwards two parameters to issue_indexed_command_and_wait,
 *   inserting the constant 0x41 and a NULL pointer as the third and fourth arguments. The
 *   return value of the callee is passed directly back to the caller. No other side effects
 *   or state modifications are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_10463450(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x41,(void *)0x0,param_2);
  return iVar1;
}
