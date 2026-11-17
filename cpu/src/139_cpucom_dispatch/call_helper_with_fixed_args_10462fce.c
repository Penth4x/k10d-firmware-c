/* @k10d call_helper_with_fixed_args_10462fce @ 0x10462fce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x1d, NULL, and 0,
 *   returning its result.
 * summary:
 *   This function is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait. It passes the pointer and the next integer as the first
 *   two arguments, followed by the constant 0x1d (29), a null pointer, and zero. The return
 *   value of the callee is returned directly. The specific role of
 *   issue_indexed_command_and_wait is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_10462fce(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x1d,(void *)0x0,0);
  return iVar1;
}
