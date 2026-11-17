/* @k10d call_helper_with_offset_and_nine @ 0x10462d66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 9, NULL, and 0, returning
 *   the result.
 * summary:
 *   The function is a thin wrapper that forwards its single pointer argument to
 *   issue_indexed_command_and_wait. It passes the pointer as the first argument, the next
 *   pointer (param_1 + 1) as the second, the constant 9 as the third, a null pointer as the
 *   fourth, and 0 as the fifth. It returns the value from the callee directly. The specific
 *   role of issue_indexed_command_and_wait is unknown, so the subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_and_nine(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,9,(void *)0x0,0);
  return iVar1;
}
