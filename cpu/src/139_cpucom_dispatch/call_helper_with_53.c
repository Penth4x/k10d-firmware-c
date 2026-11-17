/* @k10d call_helper_with_53 @ 0x104632a8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x35, NULL, and 0,
 *   returning the result.
 * summary:
 *   This is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait. It passes the pointer and the next element (param_1 +
 *   1) as the first two arguments, along with the constant 0x35 (53), a NULL pointer, and
 *   0. The return value of the callee is returned directly. The specific role of
 *   issue_indexed_command_and_wait is unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_53(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x35,(void *)0x0,0);
  return iVar1;
}
