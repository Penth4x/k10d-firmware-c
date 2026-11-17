/* @k10d deinterlace_rgb_to_yuv @ 0x1048da82
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Deinterlaces a source frame by copying even lines to Y and odd lines to U/V planes.
 * summary:
 *   The function takes a descriptor in param_1 containing source/destination pointers and
 *   dimensions. It iterates over rows, copying the first half of each source line to a
 *   destination buffer (Y plane) and the second half to two separate buffers (U and V
 *   planes). It also conditionally fills a buffer with 0xee bytes. The structure strongly
 *   suggests a deinterlacing or color-space conversion routine for image data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deinterlace_rgb_to_yuv(ushort *param_1)

{
  uint8_t uVar1;
  uint8_t *puVar2;
  uint uVar3;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint8_t *puVar6;
  uint uVar7;
  uint8_t *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint8_t *puVar12;
  int iVar13;
  uint8_t *puVar14;
  uint32_t *puVar15;
  
  puVar15 = *(uint32_t **)(param_1 + 0x12);
  puVar2 = (uint8_t *)*puVar15;
  puVar6 = (uint8_t *)puVar15[1];
  puVar5 = (uint8_t *)puVar15[2];
  uVar7 = (uint)*(ushort *)(puVar15 + 3);
  uVar3 = (uint)*(ushort *)((int)puVar15 + 0xe);
  iVar13 = *(int *)(param_1 + 4);
  if ((iVar13 == 0) && (*(int *)(param_1 + 6) == 0)) {
    iVar13 = (uint)param_1[10] * (uint)param_1[0xb] + *(int *)(param_1 + 2);
    iVar11 = iVar13 + ((int)(uint)param_1[10] >> 1) * ((int)(uint)param_1[0xb] >> 1);
  }
  else {
    iVar11 = *(int *)(param_1 + 6);
  }
  puVar8 = (uint8_t *)
           ((uint)param_1[1] * (uint)param_1[10] + *(int *)(param_1 + 2) + (uint)*param_1);
  iVar10 = ((int)(uint)param_1[1] >> 1) * ((int)(uint)param_1[10] >> 1);
  iVar9 = (int)(uint)*param_1 >> 1;
  puVar14 = (uint8_t *)(iVar13 + iVar10 + iVar9);
  puVar12 = (uint8_t *)(iVar10 + iVar11 + iVar9);
  iVar13 = 0;
  if (uVar3 != 0) {
    do {
      iVar11 = 0;
      puVar4 = puVar8;
      if (uVar7 != 0) {
        do {
          uVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          *puVar4 = uVar1;
          iVar11 = iVar11 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar11 < (int)uVar7);
      }
      puVar8 = puVar8 + param_1[10];
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)uVar3);
  }
  iVar11 = 0;
  iVar13 = (int)uVar7 >> 1;
  if ((int)uVar3 >> 1 != 0) {
    do {
      iVar10 = 0;
      puVar8 = puVar12;
      puVar2 = puVar14;
      if (iVar13 != 0) {
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = uVar1;
          puVar2 = puVar2 + 1;
          *puVar8 = *puVar5;
          puVar8 = puVar8 + 1;
          iVar10 = iVar10 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar10 < iVar13);
      }
      iVar11 = iVar11 + 1;
      puVar14 = puVar14 + ((int)(uint)param_1[10] >> 1);
      puVar12 = puVar12 + ((int)(uint)param_1[10] >> 1);
    } while (iVar11 < (int)uVar3 >> 1);
  }
  if ((*(char *)(param_1 + 0xc) != '\0') && (iVar11 = 0, uVar3 != 0)) {
    do {
      iVar10 = 0;
      if (iVar13 != 0) {
        do {
          *puVar2 = 0xee;
          iVar10 = iVar10 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar10 < iVar13);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)uVar3);
  }
  return;
}
