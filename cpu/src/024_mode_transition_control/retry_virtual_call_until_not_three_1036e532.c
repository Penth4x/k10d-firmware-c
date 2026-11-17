/* @k10d retry_virtual_call_until_not_three_1036e532 @ 0x1036e532
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object and retries a helper call up to 5 times if it
 *   returns 3.
 * summary:
 *   The function first calls virtual slot 3 of the object at *(param_4 + 0x14). It then
 *   enters a loop calling call_handler_with_two_args with the provided parameters. If
 *   call_handler_with_two_args returns 3, the loop repeats up to 5 times. If the return
 *   value is still 3 after 5 retries, it returns 0; otherwise, it returns the last non-3
 *   value from call_handler_with_two_args.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int retry_virtual_call_until_not_three_1036e532(int param_1,int param_2,uint32_t param_3,int param_4,uint32_t param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_24 [4];
  
  piVar3 = (int *)auStack_24;
  iVar2 = 0;
  do {
    (**(code **)(*(int *)(param_4 + 0x14) + 0x14))
              (*(short *)(*(int *)(param_4 + 0x14) + 0x10) + param_4);
    *piVar3 = param_5;
    iVar1 = call_handler_with_two_args((void *)param_1,param_2,param_3,param_4,*piVar3);
    if (iVar1 != 3) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (iVar1 == 3) {
    iVar1 = 0;
  }
  return iVar1;
}
