/* @k10d call_helper_with_fixed_args_10462ffe @ 0x10462ffe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x1f, NULL, and 0,
 *   returning its result.
 * summary:
 *   This is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait along with four fixed arguments: the next pointer
 *   (param_1 + 1), the constant 0x1f (31), a NULL pointer, and 0. It returns the callee's
 *   return value directly. The specific role of issue_indexed_command_and_wait is unknown,
 *   so the wrapper's behavior is purely mechanical forwarding.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_10462ffe(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x1f,(void *)0x0,0);
  return iVar1;
}
