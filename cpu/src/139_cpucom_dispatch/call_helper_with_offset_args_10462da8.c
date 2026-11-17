/* @k10d call_helper_with_offset_args_10462da8 @ 0x10462da8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, constant 0xb, a stack
 *   pointer offset, and 0.
 * summary:
 *   The function stores param_2 on the stack, then invokes issue_indexed_command_and_wait
 *   with five arguments: param_1, param_1 + 1, the constant 0xb, a pointer to a stack
 *   location (offset by 3 bytes), and 0. It returns the result of that call directly. The
 *   specific role of issue_indexed_command_and_wait is unknown, so the behavior is
 *   described mechanically as a wrapper around that call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_args_10462da8(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0xb,(void *)((int)&uStack_4 + 3),0);
  return iVar1;
}
