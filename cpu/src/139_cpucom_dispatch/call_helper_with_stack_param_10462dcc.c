/* @k10d call_helper_with_stack_param_10462dcc @ 0x10462dcc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Wraps a second argument on the stack and forwards it to a helper function.
 * summary:
 *   Stores param_2 into a local stack variable and passes a pointer to its third byte as
 *   the fourth argument to issue_indexed_command_and_wait. The first argument is passed as
 *   both the first and second parameters (param_1 and param_1+1), with 0xc as the third and
 *   0 as the fifth. Returns the result of the callee directly.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_stack_param_10462dcc(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0xc,(void *)((int)&uStack_4 + 3),0);
  return iVar1;
}
