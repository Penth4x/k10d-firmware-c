/* @k10d write_two_bytes_to_param @ 0x10462d42
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes two bytes from param_2 into the second word of the structure pointed to by
 *   param_1 via a helper.
 * summary:
 *   The function places param_2 on the stack and calls issue_indexed_command_and_wait with
 *   param_1, param_1+1, a length of 8, a pointer to the stack variable, and 0. It returns
 *   the result of the helper call. The specific role of issue_indexed_command_and_wait is
 *   unknown, so the exact data being written cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_two_bytes_to_param(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,8,(void *)((int)&uStack_4 + 3),0);
  return iVar1;
}
