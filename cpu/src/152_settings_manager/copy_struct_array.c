/* @k10d copy_struct_array @ 0x1046c76a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 152_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_array(int param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_3) {
    iVar2 = 0;
    iVar3 = param_3 + -3;
    iVar4 = param_4 << 2;
    if (2 < iVar3) {
      iVar1 = param_1 + 8;
      do {
        *(uint32_t *)((int)param_2 + iVar2) = *(uint32_t *)(iVar1 + iVar4);
        *(uint32_t *)((int)param_2 + iVar2 + 4) = *(uint32_t *)(iVar1 + iVar4 + 4);
        *(uint32_t *)((int)param_2 + iVar2 + 8) = *(uint32_t *)(iVar1 + iVar4 + 8);
        iVar4 = iVar4 + 0xc;
        iVar3 = iVar3 + -3;
        iVar2 = iVar2 + 0xc;
      } while (-1 < iVar3);
    }
    iVar3 = iVar3 + 2;
    if (-1 < iVar3) {
      do {
        *(uint32_t *)((int)param_2 + iVar2) = *(uint32_t *)(param_1 + 8 + iVar4);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + 4;
      } while (-1 < iVar3);
    }
  }
  return;
}
