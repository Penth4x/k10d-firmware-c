/* @k10d call_helper_with_offset_args_104635d6 @ 0x104635d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing the first argument twice (as base and base+1) with a fixed 0x4c
 *   length and two extra parameters.
 * summary:
 *   The function is a thin wrapper that invokes issue_indexed_command_and_wait with param_1
 *   as the first argument, param_1+1 as the second, the constant 0x4c as the third, and
 *   param_2/param_3 as the fourth and fifth arguments. It returns the helper's result
 *   directly. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_args_104635d6(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x4c,param_2,param_3);
  return iVar1;
}
