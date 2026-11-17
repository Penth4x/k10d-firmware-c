/* @k10d copy_structured_buffer_blocks @ 0x10530e4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_structured_buffer_blocks(void *param_1,ushort *param_2,ushort *param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  *param_3 = *param_2;
  uVar3 = param_2[1];
  param_3[1] = uVar3;
  iVar4 = *(int *)(param_3 + 2);
  uVar10 = 0;
  if (uVar3 != 0) {
    do {
      uVar11 = (uint)*param_3;
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          iVar1 = uVar10 * 2 * uVar11;
          *(uint16_t *)(uVar9 * 2 + iVar4 + iVar1) =
               *(uint16_t *)((int)param_2 + uVar9 * 2 + iVar1 + 4);
          uVar11 = (uint)*param_3;
          uVar9 = uVar9 + 1 & 0xffff;
        } while (uVar9 < uVar11);
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < param_3[1]);
  }
  iVar4 = (uint)param_3[1] * (uint)*param_3;
  iVar5 = *(int *)(param_3 + 4);
  iVar1 = iVar4 * 2 + 4;
  uVar10 = 0;
  if (param_3[1] != 0) {
    do {
      uVar11 = (uint)*param_3;
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          iVar6 = uVar10 * 2 * uVar11;
          *(uint16_t *)(uVar9 * 2 + iVar5 + iVar6) =
               *(uint16_t *)((int)param_2 + uVar9 * 2 + iVar6 + iVar1);
          uVar11 = (uint)*param_3;
          uVar9 = uVar9 + 1 & 0xffff;
        } while (uVar9 < uVar11);
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < param_3[1]);
  }
  iVar5 = (uint)param_3[1] * (uint)*param_3;
  iVar6 = *(int *)(param_3 + 6);
  iVar1 = iVar5 * 2 + iVar1;
  uVar10 = 0;
  if (param_3[1] != 0) {
    do {
      uVar11 = (uint)*param_3;
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          iVar7 = uVar10 * 2 * uVar11;
          *(uint16_t *)(uVar9 * 2 + iVar6 + iVar7) =
               *(uint16_t *)((int)param_2 + uVar9 * 2 + iVar7 + iVar1);
          uVar11 = (uint)*param_3;
          uVar9 = uVar9 + 1 & 0xffff;
        } while (uVar9 < uVar11);
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < param_3[1]);
  }
  iVar6 = (uint)param_3[1] * (uint)*param_3;
  iVar7 = *(int *)(param_3 + 8);
  iVar1 = iVar6 * 2 + iVar1;
  uVar10 = 0;
  if (param_3[1] != 0) {
    do {
      uVar11 = (uint)*param_3;
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          iVar8 = uVar10 * 2 * uVar11;
          *(uint16_t *)(uVar9 * 2 + iVar7 + iVar8) =
               *(uint16_t *)((int)param_2 + uVar9 * 2 + iVar8 + iVar1);
          uVar11 = (uint)*param_3;
          uVar9 = uVar9 + 1 & 0xffff;
        } while (uVar9 < uVar11);
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < param_3[1]);
  }
  iVar7 = (uint)param_3[1] * (uint)*param_3;
  iVar8 = *(int *)(param_3 + 10);
  iVar1 = iVar7 * 2 + iVar1;
  uVar10 = 0;
  if (param_3[1] != 0) {
    do {
      uVar11 = (uint)*param_3;
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          iVar12 = uVar10 * 2 * uVar11;
          *(uint16_t *)(uVar9 * 2 + iVar8 + iVar12) =
               *(uint16_t *)((int)param_2 + uVar9 * 2 + iVar12 + iVar1);
          uVar11 = (uint)*param_3;
          uVar9 = uVar9 + 1 & 0xffff;
        } while (uVar9 < uVar11);
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < param_3[1]);
  }
  iVar8 = (uint)param_3[1] * (uint)*param_3;
  iVar1 = iVar8 * 2 + iVar1;
  iVar12 = *(int *)(param_3 + 0xc);
  uVar10 = 0;
  if (param_3[1] != 0) {
    do {
      uVar11 = (uint)*param_3;
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          iVar13 = uVar10 * 4 * uVar11;
          *(uint32_t *)(uVar9 * 4 + iVar12 + iVar13) =
               *(uint32_t *)((int)param_2 + uVar9 * 4 + iVar13 + iVar1);
          uVar11 = (uint)*param_3;
          uVar9 = uVar9 + 1 & 0xffff;
        } while (uVar9 < uVar11);
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < param_3[1]);
  }
  iVar12 = (uint)param_3[1] * (uint)*param_3;
  iVar13 = *(int *)(param_3 + 0xe);
  uVar10 = 0;
  if (param_3[1] != 0) {
    do {
      uVar11 = (uint)*param_3;
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          iVar2 = uVar10 * 4 * uVar11;
          *(uint32_t *)(uVar9 * 4 + iVar13 + iVar2) =
               *(uint32_t *)((int)param_2 + uVar9 * 4 + iVar2 + iVar12 * 4 + iVar1);
          uVar11 = (uint)*param_3;
          uVar9 = uVar9 + 1 & 0xffff;
        } while (uVar9 < uVar11);
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < param_3[1]);
  }
  *(uint32_t *)(param_3 + 0x10) =
       *(uint32_t *)
        (param_2 +
        iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar12 * 2 +
                                                (uint)param_3[1] * (uint)*param_3 * 2 + 2);
  return;
}
