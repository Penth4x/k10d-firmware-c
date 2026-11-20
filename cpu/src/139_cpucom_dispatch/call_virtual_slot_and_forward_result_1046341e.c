/* @k10d call_virtual_slot_and_forward_result_1046341e @ 0x1046341e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on param_2 and passes the result to
 *   issue_indexed_command_and_wait.
 * summary:
 *   The function performs a Cfront-style virtual call on the object pointed to by param_2,
 *   using the vtable offset 0x2c and this-adjustment from 0x28. The return value of this
 *   virtual call is stored in a local variable and then passed as the fifth argument to
 *   issue_indexed_command_and_wait, along with param_1, param_1+1, 0x40, and 0x0. The
 *   specific subsystem is not identifiable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_and_forward_result_1046341e(int *param_1,int *param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  int *piVar2;
  uint8_t local_10 [4];
  
  piVar2 = (int *)local_10;
  uVar1 = (((vtbl_entry*)(*param_2))[5].fn)((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2);
  *piVar2 = uVar1;
  issue_indexed_command_and_wait(param_1,param_1 + 1,0x40,(void *)0x0,*piVar2);
  return;
}
