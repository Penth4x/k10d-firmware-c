/* @k10d allocate_buffer_segment @ 0x1051b6b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_buffer_segment(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  int iStack_10;
  
  uVar4 = 1;
  iVar3 = check_range_within_bounds((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
  if (iVar3 == 0) {
    if (*(uint *)(param_1 + 8) < param_3) {
      *(uint8_t *)(param_1 + 0x21) = 1;
      uVar4 = 0;
    }
    else {
      iVar3 = return_max_of_two_1051b2a4(param_3,0x800);
      iStack_10 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c);
      if (param_3 + iStack_10 < *(uint *)(param_1 + 8)) {
        if ((*(uint *)(param_1 + 0xc) < param_2) &&
           (uVar2 = *(uint *)(param_1 + 0xc) + iStack_10, param_2 < uVar2)) {
          iStack_10 = *(int *)(param_1 + 4) + iStack_10;
          bVar1 = true;
          param_2 = uVar2;
        }
        else {
          iStack_10 = *(int *)(param_1 + 4);
          bVar1 = false;
        }
      }
      else {
        iStack_10 = *(int *)(param_1 + 4);
        bVar1 = false;
      }
      iVar5 = **(int **)(param_1 + 0x14);
      iVar5 = (((vtbl_entry*)(iVar5))[6].fn)
                        ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar5))[6].adj,
                         *(uint32_t *)(param_1 + 0x18),param_2,0);
      if ((iVar5 == 0) ||
         (iVar5 = **(int **)(param_1 + 0x14),
         iVar5 = (((vtbl_entry*)(iVar5))[4].fn)
                           ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar5))[4].adj,
                            *(uint32_t *)(param_1 + 0x18),iStack_10,iVar3), iVar5 == 0)) {
        *(uint8_t *)(param_1 + 0x21) = 1;
        uVar4 = 0;
      }
      else {
        if (bVar1) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar3;
        }
        else {
          *(int *)(param_1 + 0x10) = iVar3;
          *(uint *)(param_1 + 0xc) = param_2;
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}
