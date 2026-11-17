/* @k10d call_helper_with_fixed_args_104631fa @ 0x104631fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the input pointer, its next element, and fixed constants 0x30, 0,
 *   and 0.
 * summary:
 *   This function is a thin wrapper that invokes issue_indexed_command_and_wait. It passes
 *   param_1 as the first argument, param_1 + 1 as the second, and the constants 0x30, NULL,
 *   and 0 as the remaining arguments. It returns the result of the callee directly. The
 *   specific role of the callee is unknown, so the wrapper's behavior is described
 *   mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_104631fa(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x30,(void *)0x0,0);
  return iVar1;
}
