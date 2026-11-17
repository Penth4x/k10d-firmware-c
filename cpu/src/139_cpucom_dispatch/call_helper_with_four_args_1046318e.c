/* @k10d call_helper_with_four_args_1046318e @ 0x1046318e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x2c, NULL, and 0,
 *   returning its result.
 * summary:
 *   This is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait along with a fixed offset pointer (param_1 + 1), the
 *   constant 0x2c (44), a NULL pointer, and 0. It returns the callee's return value
 *   directly. The role of issue_indexed_command_and_wait is unknown, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_four_args_1046318e(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x2c,(void *)0x0,0);
  return iVar1;
}
