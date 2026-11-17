/* @k10d call_helper_with_zeroed_flag @ 0x104632f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls issue_indexed_command_and_wait with a zeroed local flag and a value from
 *   return_r4_passthrough_10463852.
 * summary:
 *   Initializes a local 4-byte variable to 0. Calls return_r4_passthrough_10463852 to
 *   obtain a pointer. Calls issue_indexed_command_and_wait passing param_1, param_1+1,
 *   0x38, the pointer from return_r4_passthrough_10463852, and the zeroed local variable.
 *   Returns the result of issue_indexed_command_and_wait.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_zeroed_flag(int *param_1)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t local_10 [4];
  
  piVar3 = (int *)local_10;
  pvVar1 = (void *)return_r4_passthrough_10463852();
  *piVar3 = 0;
  iVar2 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x38,pvVar1,*piVar3);
  return iVar2;
}
