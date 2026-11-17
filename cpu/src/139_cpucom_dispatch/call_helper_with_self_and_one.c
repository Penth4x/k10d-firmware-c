/* @k10d call_helper_with_self_and_one @ 0x10462c46
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 1, NULL, and 0.
 * summary:
 *   This function is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait. It passes the pointer itself as the first argument, the
 *   next pointer as the second, the constant 1 as the third, a NULL pointer as the fourth,
 *   and 0 as the fifth. No other operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_self_and_one(int *param_1)

{
  issue_indexed_command_and_wait(param_1,param_1 + 1,1,(void *)0x0,0);
  return;
}
