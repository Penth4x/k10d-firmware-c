/* @k10d call_helper_with_offset_and_length @ 0x104635aa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the first argument, a pointer offset by one, a constant length of
 *   0x4a, and the remaining two parameters.
 * summary:
 *   This function is a thin wrapper that forwards its three parameters to
 *   issue_indexed_command_and_wait. It passes param_1 as the first argument, param_1 + 1 as
 *   the second argument, the constant 0x4a (74) as the third argument, and passes param_2
 *   and param_3 through unchanged. It returns the result of the callee directly.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_and_length(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x4a,param_2,param_3);
  return iVar1;
}
