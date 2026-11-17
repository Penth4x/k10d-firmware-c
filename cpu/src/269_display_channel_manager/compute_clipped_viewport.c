/* @k10d compute_clipped_viewport @ 0x1050aade
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_clipped_viewport(uint32_t param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint32_t uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar9 = param_2[2];
  iVar7 = param_2[3];
  uVar1 = param_2[4] * *param_2;
  uVar2 = param_2[5] * param_2[1];
  iVar4 = iVar9 - (uVar1 >> 1);
  iVar3 = iVar7 - (uVar2 >> 1);
  iVar6 = (uVar1 >> 1) + iVar9;
  iVar10 = param_2[6];
  iVar12 = param_2[7];
  iVar5 = (uVar2 >> 1) + iVar7;
  if ((uVar1 < (uint)(iVar10 * 0x100) || uVar1 + iVar10 * -0x100 == 0) &&
     (uVar2 < (uint)(iVar12 * 0x100) || uVar2 + iVar12 * -0x100 == 0)) {
    if (iVar4 < 0) {
      iVar11 = -iVar4;
      iVar9 = iVar9 + iVar11;
      iVar4 = 0;
      iVar6 = iVar11 + iVar6;
    }
    if (iVar3 < 0) {
      iVar11 = -iVar3;
      iVar7 = iVar7 + iVar11;
      iVar3 = 0;
      iVar5 = iVar11 + iVar5;
    }
    iVar11 = iVar6;
    if (iVar10 * 0x100 < iVar6) {
      iVar11 = (iVar10 + -1) * 0x100;
      iVar6 = iVar6 + (iVar10 + -1) * -0x100;
      iVar9 = iVar9 - iVar6;
      iVar4 = iVar4 - iVar6;
    }
    iVar6 = iVar5;
    if (iVar12 * 0x100 < iVar5) {
      iVar6 = (iVar12 + -1) * 0x100;
      iVar5 = iVar5 + (iVar12 + -1) * -0x100;
      iVar7 = iVar7 - iVar5;
      iVar3 = iVar3 - iVar5;
    }
    iVar5 = (int)(((uint)(iVar4 >> 0xb) >> 0x14) + iVar4) >> 0xc;
    iVar10 = iVar5 * 0x10;
    iVar13 = (int)(((uint)(iVar3 >> 7) >> 0x18) + iVar3) >> 8;
    iVar12 = iVar4 + iVar5 * -0x1000;
    iVar5 = iVar3 + iVar13 * -0x100;
    if (0x1000 < iVar12) {
      iVar12 = iVar12 + -0x1000;
      iVar10 = iVar10 + 0x10;
    }
    if (0x100 < iVar5) {
      iVar5 = iVar5 + -0x100;
      iVar13 = iVar13 + 1;
    }
    *param_3 = iVar9;
    param_3[1] = iVar7;
    param_3[2] = iVar4;
    param_3[3] = iVar3;
    param_3[4] = iVar11;
    param_3[5] = iVar6;
    param_3[6] = iVar10;
    param_3[7] = iVar13;
    param_3[8] = iVar12;
    param_3[9] = iVar5;
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}
