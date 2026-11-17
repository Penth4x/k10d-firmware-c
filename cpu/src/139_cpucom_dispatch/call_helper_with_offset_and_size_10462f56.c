/* @k10d call_helper_with_offset_and_size_10462f56 @ 0x10462f56
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, size 0x18, null, and 0,
 *   returning the result.
 * summary:
 *   The function is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait. It passes the pointer itself, the next pointer (param_1
 *   + 1), the constant 0x18, a null pointer, and 0 as arguments. It returns the value
 *   returned by issue_indexed_command_and_wait directly. No other side effects or global
 *   accesses are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_and_size_10462f56(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x18,(void *)0x0,0);
  return iVar1;
}
