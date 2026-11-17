/* @k10d retry_virtual_call_five_times_10370d7a @ 0x10370d7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int retry_virtual_call_five_times_10370d7a(int param_1,int param_2,uint32_t param_3,int param_4,uint32_t param_5)

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
