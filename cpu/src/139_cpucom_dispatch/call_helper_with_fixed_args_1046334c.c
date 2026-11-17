/* @k10d call_helper_with_fixed_args_1046334c @ 0x1046334c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x3b, NULL, and param_2,
 *   returning its result.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   issue_indexed_command_and_wait. It passes param_1 as the first argument, param_1 + 1 as
 *   the second, the constant 0x3b as the third, a NULL pointer as the fourth, and param_2
 *   as the fifth. The return value of issue_indexed_command_and_wait is returned directly.
 *   The specific role of issue_indexed_command_and_wait is unknown, so the camera subsystem
 *   context cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_1046334c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x3b,(void *)0x0,param_2);
  return iVar1;
}
