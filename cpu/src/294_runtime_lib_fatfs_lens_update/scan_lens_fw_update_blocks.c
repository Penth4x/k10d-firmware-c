/* @k10d scan_lens_fw_update_blocks @ 0x1053b43c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t scan_lens_fw_update_blocks(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint32_t uStack_24;
  
  uVar4 = 0;
  uVar5 = 0;
  uVar3 = 0;
  iVar9 = *(int *)(param_2 + 0xc);
  iVar8 = 0;
  uStack_24 = 3;
  uVar1 = *(uint *)(param_1 + 0x4c);
  iVar10 = 4;
  iVar2 = 5;
  for (uVar6 = 2; uVar6 < uVar1; uVar6 = uVar6 + 2) {
    if ((*(char *)(uStack_24 + iVar9) == '\0') && ((*(byte *)(iVar10 + iVar9) & 0xf) == 0)) {
      iVar8 = iVar8 + 1;
      if (uVar6 == uVar3 + 1) {
        uVar4 = uVar4 + 1;
        uVar3 = uVar6;
      }
      else {
        if (uVar4 != 0) {
          insert_lens_fw_block(param_2,uVar5,uVar4);
        }
        uVar4 = 1;
        uVar3 = uVar6;
        uVar5 = uVar6;
      }
    }
    uVar7 = uVar6 + 1;
    if (uVar1 <= uVar7) break;
    if (((*(byte *)(iVar10 + iVar9) & 0xf0) == 0) && (*(char *)(iVar2 + iVar9) == '\0')) {
      iVar8 = iVar8 + 1;
      if (uVar7 == uVar3 + 1) {
        uVar4 = uVar4 + 1;
        uVar3 = uVar7;
      }
      else {
        if (uVar4 != 0) {
          insert_lens_fw_block(param_2,uVar5,uVar4);
        }
        uVar4 = 1;
        uVar3 = uVar7;
        uVar5 = uVar7;
      }
    }
    uStack_24 = uStack_24 + 3;
    iVar2 = iVar2 + 3;
    iVar10 = iVar10 + 3;
  }
  if (uVar4 != 0) {
    insert_lens_fw_block(param_2,uVar5,uVar4);
  }
  *(int *)(param_2 + 0x18) = iVar8;
  return 0;
}
