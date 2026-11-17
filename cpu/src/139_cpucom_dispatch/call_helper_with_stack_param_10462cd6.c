/* @k10d call_helper_with_stack_param_10462cd6 @ 0x10462cd6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Passes a stack-stored parameter to issue_indexed_command_and_wait and returns its
 *   result.
 * summary:
 *   Stores param_2 on the stack, then calls issue_indexed_command_and_wait with param_1,
 *   param_1+1, the constant 5, a pointer to the stack value, and 0. Returns the callee's
 *   return value directly. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_stack_param_10462cd6(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,5,(void *)((int)&uStack_4 + 3),0);
  return iVar1;
}
