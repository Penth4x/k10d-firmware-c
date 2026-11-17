/* @k10d call_helper_with_stack_param_104630f2 @ 0x104630f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Stores param_2 on the stack and calls issue_indexed_command_and_wait with param_1, a
 *   derived pointer, 0x27, and a stack address.
 * summary:
 *   The function places its second argument into a local stack variable. It then invokes
 *   issue_indexed_command_and_wait, passing param_1 as the first argument, param_1+1 as the
 *   second, the constant 0x27 as the third, a pointer to the stack variable (offset by 3)
 *   as the fourth, and 0 as the fifth. The role of issue_indexed_command_and_wait is
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_stack_param_104630f2(int *param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  issue_indexed_command_and_wait(param_1,param_1 + 1,0x27,(void *)((int)&uStack_4 + 3),0);
  return;
}
