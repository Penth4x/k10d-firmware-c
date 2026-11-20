/* @k10d retry_virtual_call_until_not_three_10364f3c @ 0x10364f3c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int retry_virtual_call_until_not_three_10364f3c(void *param_1,int param_2,int param_3,int param_4,uint32_t param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t local_24 [4];
  
  piVar3 = (int *)local_24;
  iVar2 = 0;
  do {
    (((vtbl_entry*)(*(int *)(param_4 + 0x14)))[2].fn)
              (((vtbl_entry*)(*(int *)(param_4 + 0x14)))[2].adj + param_4);
    *piVar3 = param_5;
    iVar1 = call_handler_with_two_args(param_1,param_2,param_3,param_4,*piVar3);
    if (iVar1 != 3) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (iVar1 == 3) {
    iVar1 = 0;
  }
  return iVar1;
}
