/* @k10d transfer_data_via_virtual_method @ 0x1053e016
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transfer_data_via_virtual_method(int param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *param_5 = 0;
  puVar2 = *(uint **)(param_1 + 0x70);
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar5 = *puVar2;
    if (param_3 < *puVar2) {
      uVar5 = param_3;
    }
    iVar4 = (**(int (**)(uint32_t,int,uint,int))(param_1 + 0x5c))(*(uint32_t *)(param_1 + 0x60),param_2,uVar5,param_4);
    if (iVar4 != 0) break;
    param_2 = param_2 + uVar5;
    param_4 = param_4 + uVar5 * iVar1;
    *param_5 = *param_5 + uVar5;
    param_3 = param_3 - uVar5;
  }
  if (iVar4 == -1000) {
    *(ushort *)(*(int *)(param_1 + 100) + 0xe) = *(ushort *)(*(int *)(param_1 + 100) + 0xe) | 1;
    cVar3 = -6;
  }
  else {
    cVar3 = -5;
  }
  return (int)cVar3;
}
