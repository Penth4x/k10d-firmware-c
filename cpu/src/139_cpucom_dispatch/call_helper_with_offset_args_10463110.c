/* @k10d call_helper_with_offset_args_10463110 @ 0x10463110
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, a pointer offset by 4, a size of
 *   0x28, a stack pointer, and 0.
 * summary:
 *   The function stores param_2 on the stack and then invokes
 *   issue_indexed_command_and_wait. The arguments passed are param_1, param_1 + 1 (which is
 *   +4 bytes), the constant 0x28, a pointer to the stack location of param_2 (adjusted by 3
 *   bytes), and 0. The role of issue_indexed_command_and_wait is unknown, so the specific
 *   behavior is a wrapper around that call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_args_10463110(int *param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  issue_indexed_command_and_wait(param_1,param_1 + 1,0x28,(void *)((int)&uStack_4 + 3),0);
  return;
}
