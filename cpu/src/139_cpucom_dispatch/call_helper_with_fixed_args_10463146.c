/* @k10d call_helper_with_fixed_args_10463146 @ 0x10463146
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the input pointer, its next element, and fixed constants 0x2a, 0,
 *   and 0.
 * summary:
 *   The function takes a single pointer argument and immediately calls
 *   issue_indexed_command_and_wait. It passes the pointer as the first argument, the
 *   pointer incremented by one as the second argument, and the constants 0x2a, 0, and 0 as
 *   the remaining arguments. It returns the result of this call directly. The specific role
 *   of issue_indexed_command_and_wait is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_fixed_args_10463146(int *param_1)

{
  int iVar1;
  
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x2a,(void *)0x0,0);
  return iVar1;
}
