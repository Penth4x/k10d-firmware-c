/* @k10d call_helper_with_five_args @ 0x10462cfa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 5, param_2, and 0,
 *   returning its result.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to
 *   issue_indexed_command_and_wait, adding the constant 5 as the third argument and 0 as
 *   the fifth. The return value of the callee is passed directly back to the caller. No
 *   other side effects or memory operations are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_five_args(int *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,5,param_2,0);
  return iVar1;
}
