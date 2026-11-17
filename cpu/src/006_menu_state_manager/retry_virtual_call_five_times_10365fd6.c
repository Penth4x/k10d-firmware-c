/* @k10d retry_virtual_call_five_times_10365fd6 @ 0x10365fd6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Retries a virtual method call up to five times, returning success if the callee stops
 *   returning 3.
 * summary:
 *   The function loops up to 5 times, calling a virtual method on the object at param_4
 *   (slot 3, offset 0x14) and then calling call_handler_with_two_args with the original
 *   parameters plus param_5. If call_handler_with_two_args returns 3, the loop continues;
 *   otherwise it breaks. If the loop exhausts all 5 attempts with a return value of 3, the
 *   function returns 0; otherwise it returns the last non-3 value from
 *   call_handler_with_two_args.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int retry_virtual_call_five_times_10365fd6(int param_1,int param_2,uint32_t param_3,int param_4,uint32_t param_5)

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
