/* @k10d call_helper_with_stack_arg_1046354a @ 0x1046354a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Wraps a call to issue_indexed_command_and_wait, passing a stack-allocated pointer as
 *   the fourth argument.
 * summary:
 *   The function stores param_2 on the stack and passes a pointer to it (offset by 3) as
 *   the fourth argument to issue_indexed_command_and_wait. It also passes param_1,
 *   param_1+1, the constant 0x47, and param_3. The return value of the callee is returned
 *   directly. The specific role of issue_indexed_command_and_wait is unknown, so the
 *   wrapper's purpose is purely mechanical.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_stack_arg_1046354a(int *param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x47,(void *)((int)&uStack_4 + 3),param_3);
  return iVar1;
}
