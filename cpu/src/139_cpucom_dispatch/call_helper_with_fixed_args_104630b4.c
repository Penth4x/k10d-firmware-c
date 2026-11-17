/* @k10d call_helper_with_fixed_args_104630b4 @ 0x104630b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper with the input pointer, a derived pointer, and three fixed
 *   constants.
 * summary:
 *   The function takes a single pointer argument and immediately calls
 *   issue_indexed_command_and_wait. It passes param_1 as the first argument, param_1 + 1 as
 *   the second, 0x25 as the third, a stack value as the fourth, and 0 as the fifth. No
 *   other operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104630b4(int *param_1)

{
  uintptr_t sp;
  
  issue_indexed_command_and_wait(param_1,param_1 + 1,0x25,&stack0x00000003,0);
  return;
}
