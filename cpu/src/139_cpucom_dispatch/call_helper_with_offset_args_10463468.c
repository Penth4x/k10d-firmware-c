/* @k10d call_helper_with_offset_args_10463468 @ 0x10463468
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with param_1, param_1+1, constant 0x42, a stack
 *   pointer, and param_3.
 * summary:
 *   This function is a thin wrapper that constructs a stack argument (param_2) and invokes
 *   issue_indexed_command_and_wait. It passes the first argument twice (as the first and
 *   second parameters, with the second offset by 4 bytes), a fixed constant 0x42, a pointer
 *   to the stack variable, and the third argument. The return value of the callee is
 *   returned directly. The specific role of issue_indexed_command_and_wait is unknown, so
 *   the camera subsystem context cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_args_10463468(int *param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x42,(void *)((int)&uStack_4 + 3),param_3);
  return iVar1;
}
