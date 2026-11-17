/* @k10d call_helper_with_stack_param_10462cb2 @ 0x10462cb2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Wraps a second argument on the stack and forwards both to a helper function.
 * summary:
 *   Stores param_2 into a local stack variable and calls issue_indexed_command_and_wait
 *   with param_1, param_1+1, the constant 4, a pointer to the stack variable, and 0.
 *   Returns the helper's result directly. The role of issue_indexed_command_and_wait is
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_stack_param_10462cb2(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,4,(void *)((int)&uStack_4 + 3),0);
  return iVar1;
}
