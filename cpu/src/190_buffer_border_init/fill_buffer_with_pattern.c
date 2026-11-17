/* @k10d fill_buffer_with_pattern @ 0x1048d63c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 190_buffer_border_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_buffer_with_pattern(ushort *param_1)

{
  int iVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  int iVar5;
  uint8_t *puVar6;
  int iVar7;
  uint uVar8;
  uint8_t *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint8_t *puVar13;
  uint8_t *puVar14;
  int iVar15;
  uint8_t *puVar16;
  
  iVar15 = *(int *)(param_1 + 4);
  if ((iVar15 == 0) && (*(int *)(param_1 + 6) == 0)) {
    iVar15 = (uint)param_1[10] * (uint)param_1[0xb] + *(int *)(param_1 + 2);
    iVar11 = ((int)(uint)param_1[10] >> 1) * ((int)(uint)param_1[0xb] >> 1);
    iVar12 = iVar15 + iVar11;
    iVar11 = iVar11 + iVar12;
  }
  else {
    iVar12 = *(int *)(param_1 + 6);
    iVar11 = *(int *)(param_1 + 8);
  }
  uVar10 = (uint)param_1[1];
  puVar9 = (uint8_t *)(uVar10 * param_1[10] + *(int *)(param_1 + 2) + (uint)*param_1);
  iVar7 = (int)(uint)param_1[10] >> 1;
  iVar1 = ((int)uVar10 >> 1) * iVar7;
  iVar5 = (int)(uint)*param_1 >> 1;
  puVar16 = (uint8_t *)(iVar15 + iVar1 + iVar5);
  puVar14 = (uint8_t *)(iVar1 + iVar12 + iVar5);
  puVar13 = (uint8_t *)(uVar10 * iVar7 + iVar11 + iVar5);
  iVar15 = (uint)param_1[0x12] * 3;
  uVar2 = (&DAT_105984dc/*ROM*/)[iVar15];
  uVar3 = (&DAT_105984de/*ROM*/)[iVar15];
  uVar4 = (&DAT_105984dd/*ROM*/)[iVar15];
  uVar8 = (uint)param_1[0x13];
  uVar10 = (uint)param_1[0x14];
  iVar15 = 0;
  if (uVar10 != 0) {
    do {
      iVar11 = 0;
      puVar6 = puVar9;
      if (uVar8 != 0) {
        do {
          *puVar6 = uVar2;
          iVar11 = iVar11 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar11 < (int)uVar8);
      }
      puVar9 = puVar9 + param_1[10];
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)uVar10);
  }
  iVar11 = 0;
  iVar15 = (int)uVar8 >> 1;
  if ((int)uVar10 >> 1 != 0) {
    do {
      iVar12 = 0;
      puVar9 = puVar16;
      puVar6 = puVar14;
      if (iVar15 != 0) {
        do {
          *puVar9 = uVar3;
          puVar9 = puVar9 + 1;
          *puVar6 = uVar4;
          iVar12 = iVar12 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar12 < iVar15);
      }
      iVar11 = iVar11 + 1;
      puVar16 = puVar16 + ((int)(uint)param_1[10] >> 1);
      puVar14 = puVar14 + ((int)(uint)param_1[10] >> 1);
    } while (iVar11 < (int)uVar10 >> 1);
  }
  if ((*(char *)(param_1 + 0xc) != '\0') && (iVar11 = 0, uVar10 != 0)) {
    do {
      iVar12 = 0;
      puVar14 = puVar13;
      if (iVar15 != 0) {
        do {
          *puVar14 = 0xee;
          iVar12 = iVar12 + 1;
          puVar14 = puVar14 + 1;
        } while (iVar12 < iVar15);
      }
      puVar13 = puVar13 + ((int)(uint)param_1[10] >> 1);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)uVar10);
  }
  return;
}
