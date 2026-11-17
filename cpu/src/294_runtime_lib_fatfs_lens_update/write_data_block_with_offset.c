/* @k10d write_data_block_with_offset @ 0x10542dd2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_data_block_with_offset(void *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)param_1 + 0xc);
  iVar2 = *(int *)((int)param_1 + 0x14);
  iVar3 = *(int *)((int)param_1 + 0x38);
  uVar1 = unsigned_divide(param_3,uVar4);
  iVar3 = iVar3 + (param_2 + -2) * iVar2 + uVar1;
  uVar1 = iVar2 - uVar1;
  uVar4 = compute_modulo_10544c28(param_3,uVar4);
  if (uVar4 != 0) {
    iVar2 = (*(code *)0x1053e1b6/*ROM*/)(param_1,iVar3,iVar3);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar3 = iVar3 + 1;
    uVar1 = uVar1 - 1;
  }
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = write_via_virtual_interface(param_1,iVar3,uVar1);
  }
  return iVar2;
}
