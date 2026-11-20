/* @k10d query_exposure_compensation @ 0x104a2760
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_exposure_compensation(int param_1,int *param_2)

{
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint16_t uVar7;
  int iVar5;
  char cVar8;
  int iVar6;
  byte bVar9;
  int iVar10;
  uintptr_t sp;
  uint8_t *puVar11;
  uint8_t auStack_34 [4];
  
  puVar11 = auStack_34;
  uVar1 = *(uint32_t *)(param_1 + 0x2c);
  iVar10 = **(int **)(param_1 + 0x10);
  uVar2 = (((vtbl_entry*)(iVar10))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar10))[2].adj,0x14);
  iVar10 = **(int **)(param_1 + 0x10);
  uVar3 = (((vtbl_entry*)(iVar10))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar10))[2].adj,0x36);
  iVar10 = **(int **)(param_1 + 0x10);
  uVar4 = (((vtbl_entry*)(iVar10))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar10))[2].adj,1);
  iVar10 = **(int **)(param_1 + 0x10);
  uVar7 = (((vtbl_entry*)(iVar10))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar10))[2].adj,8);
  *(uint16_t *)(puVar11 + 2) = uVar7;
  iVar10 = compute_exposure_value_from_table(uVar1,uVar2 & 0xff,uVar3 & 0xff,uVar4 & 0xff,*(short *)(puVar11 + 2));
  *param_2 = iVar10;
  if (iVar10 == 0) {
    iVar10 = **(int **)(param_1 + 0x20);
    iVar5 = (((vtbl_entry*)(iVar10))[3].fn)
                      ((int)*(int **)(param_1 + 0x20) + (int)((vtbl_entry*)(iVar10))[3].adj,7);
    iVar10 = 0;
    if (iVar5 != 0) {
      iVar10 = **(int **)(param_1 + 0x10);
      cVar8 = (((vtbl_entry*)(iVar10))[2].fn)
                        ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar10))[2].adj,1);
      iVar10 = **(int **)(param_1 + 0xc);
      iVar5 = (((vtbl_entry*)(iVar10))[3].fn)
                        ((int)*(int **)(param_1 + 0xc) + (int)((vtbl_entry*)(iVar10))[3].adj,5);
      iVar10 = **(int **)(param_1 + 0x1c);
      iVar6 = (((vtbl_entry*)(iVar10))[3].fn)
                        ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar10))[3].adj,0x22);
      iVar10 = iVar5;
      if ((((cVar8 != '\0') && (cVar8 != '\x01')) && (iVar10 = 0, cVar8 == '\x02')) &&
         ((iVar10 = 0, iVar6 == 0 || (iVar5 != 0)))) {
        iVar10 = 1;
      }
    }
    if (iVar10 != 0) {
      bVar9 = settings_getter(*(int *)(param_1 + 0x24),99);
      *param_2 = *(int *)((uint)bVar9 * 4 + 0x105b60ec/*ROM*/) * 100;
    }
  }
  param_2[1] = 100;
  return;
}
