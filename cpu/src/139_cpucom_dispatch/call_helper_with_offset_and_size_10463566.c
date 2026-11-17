/* @k10d call_helper_with_offset_and_size_10463566 @ 0x10463566
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_1, param_1+1, size 0x48, null, and param_2, returning the
 *   result.
 * summary:
 *   This function is a thin wrapper that invokes issue_indexed_command_and_wait with a
 *   fixed set of arguments: the first parameter, a pointer one element past it, a constant
 *   size of 0x48 (72), a null pointer, and the second parameter. It returns the value from
 *   the callee directly. The specific role of the operation is not determinable from the
 *   pseudocode alone as the callee's purpose is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_and_size_10463566(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x48,(void *)0x0,param_2);
  return iVar1;
}
