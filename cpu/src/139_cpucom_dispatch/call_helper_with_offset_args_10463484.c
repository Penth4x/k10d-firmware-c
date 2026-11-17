/* @k10d call_helper_with_offset_args_10463484 @ 0x10463484
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, constant 0x43, a stack
 *   pointer, and param_3.
 * summary:
 *   The function constructs a stack frame containing param_2 and passes a pointer to it
 *   (adjusted by 3) as the fourth argument to issue_indexed_command_and_wait. It also
 *   passes param_1 and param_1+1 as the first two arguments, along with the constant 0x43
 *   and param_3. The return value of the callee is returned directly. The specific role of
 *   issue_indexed_command_and_wait is unknown, so the mechanical behavior is a wrapper
 *   call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_args_10463484(int *param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x43,(void *)((int)&uStack_4 + 3),param_3);
  return iVar1;
}
