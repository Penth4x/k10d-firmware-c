/* @k10d call_helper_with_stack_arg_10462ef6 @ 0x10462ef6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, 0x15, a stack pointer
 *   offset, and 0.
 * summary:
 *   The function stores param_2 on the stack and passes a pointer to it (offset by 3) as
 *   the fourth argument to issue_indexed_command_and_wait. It returns the result of that
 *   call directly. The specific role of issue_indexed_command_and_wait is unknown, so the
 *   behavior is described mechanically as a wrapper call with specific constant and pointer
 *   arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_stack_arg_10462ef6(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x15,(void *)((int)&uStack_4 + 3),0);
  return iVar1;
}
