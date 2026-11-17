/* @k10d call_helper_with_stack_param_104635ec @ 0x104635ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Wraps a call to issue_indexed_command_and_wait, passing param_1 twice, a constant 0x4d,
 *   a stack pointer, and param_3.
 * summary:
 *   The function stores param_2 on the stack and passes a pointer to it (adjusted by 3
 *   bytes) as the fourth argument to issue_indexed_command_and_wait. It also passes param_1
 *   as both the first and second arguments (param_1 and param_1+1) and the constant 0x4d as
 *   the third. The return value of the callee is returned directly. The specific role of
 *   issue_indexed_command_and_wait is unknown, so the subsystem is not identifiable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_stack_param_104635ec(int *param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x4d,(void *)((int)&uStack_4 + 3),param_3);
  return iVar1;
}
