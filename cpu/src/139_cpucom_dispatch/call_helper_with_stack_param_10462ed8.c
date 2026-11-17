/* @k10d call_helper_with_stack_param_10462ed8 @ 0x10462ed8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Wraps a second argument on the stack and forwards it to issue_indexed_command_and_wait
 *   with fixed offsets.
 * summary:
 *   Stores param_2 into a local stack slot, then calls issue_indexed_command_and_wait with
 *   param_1, param_1+1, 0x14, a pointer to the stack slot (offset +3), and 0. Returns the
 *   callee's result. No camera-specific behavior is evident from the pseudocode or the
 *   single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_stack_param_10462ed8(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x14,(void *)((int)&uStack_4 + 3),0);
  return iVar1;
}
