/* @k10d call_helper_with_fixed_args_10462fe6 @ 0x10462fe6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x1e, NULL, and 0,
 *   returning the result.
 * summary:
 *   This function is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait. It passes the pointer and the next integer in memory as
 *   the first two arguments, followed by the constant 0x1e (30), a null pointer, and zero.
 *   The return value of the callee is passed directly back to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_10462fe6(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x1e,(void *)0x0,0);
  return iVar1;
}
