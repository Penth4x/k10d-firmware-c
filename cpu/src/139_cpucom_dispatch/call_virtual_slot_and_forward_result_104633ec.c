/* @k10d call_virtual_slot_and_forward_result_104633ec @ 0x104633ec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 4 of param_2 and passes the result to
 *   issue_indexed_command_and_wait with fixed arguments.
 * summary:
 *   Performs a Cfront-style virtual call on param_2 using vtable offset 0x2c and this-
 *   adjustment from 0x28. The return value is stored in a local and passed as the fifth
 *   argument to issue_indexed_command_and_wait, along with param_1, param_1+1, 0x3f, and
 *   NULL. No camera-specific subsystem is identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_and_forward_result_104633ec(int *param_1,int *param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  int *piVar2;
  uint8_t local_10 [4];
  
  piVar2 = (int *)local_10;
  uVar1 = (**(code **)(*param_2 + 0x2c))((int)*(short *)(*param_2 + 0x28) + (int)param_2);
  *piVar2 = uVar1;
  issue_indexed_command_and_wait(param_1,param_1 + 1,0x3f,(void *)0x0,*piVar2);
  return;
}
