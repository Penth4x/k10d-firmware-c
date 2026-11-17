/* @k10d configure_metering_regions @ 0x1048e088
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Sets up multiple rectangular regions for the image sensor metering system using a
 *   region configuration helper.
 * summary:
 *   The function calculates offsets and dimensions for up to nine rectangular regions based
 *   on a structure passed in param_1. It calls fill_2d_region_with_byte_1048e314
 *   repeatedly, passing calculated pointers, dimensions, and specific region IDs (stored in
 *   uRam1059852x globals) to define these areas. The logic includes conditional handling
 *   for a flag at param_1+0xc and arithmetic involving offsets of 4 and 8, suggesting a
 *   grid-based or multi-zone metering layout.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_metering_regions(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  uint8_t uVar10;
  uint8_t uVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uintptr_t sp;
  uint8_t *puVar17;
  uint8_t auStackY_4c [2];
  int iStack_34;
  int iStack_2c;
  
  uVar13 = uRam1059852f;
  uVar12 = uRam1059852e;
  uVar11 = uRam1059852c;
  uVar10 = uRam1059852b;
  uVar9 = uRam1059852a;
  uVar8 = uRam10598529;
  uVar7 = uRam10598528;
  uVar6 = uRam10598527;
  puVar17 = auStackY_4c;
  iVar14 = *(int *)(param_1 + 2);
  iVar16 = *(int *)(param_1 + 4);
  if ((iVar16 == 0) && (*(int *)(param_1 + 6) == 0)) {
    iVar16 = (uint)param_1[10] * (uint)param_1[0xb] + iVar14;
    iStack_2c = ((int)(uint)param_1[10] >> 1) * ((int)(uint)param_1[0xb] >> 1);
    iStack_34 = iVar16 + iStack_2c;
    iStack_2c = iStack_2c + iStack_34;
  }
  else {
    iStack_34 = *(int *)(param_1 + 6);
    iStack_2c = *(int *)(param_1 + 8);
  }
  uVar2 = param_1[10];
  iVar1 = ((int)(uint)param_1[1] >> 1) * ((int)(uint)uVar2 >> 1);
  iVar15 = (int)(uint)*param_1 >> 1;
  fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)((uint)param_1[1] * (uint)uVar2 + iVar14 + (uint)*param_1),
               uRam1059852d,(uint)param_1[0x13],param_1[0x14],uVar2);
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar17 + 2) = (short)((int)(uint)param_1[0x14] >> 1);
  *(short *)(puVar17 + 6) = (short)((int)(uint)uVar3 >> 1);
  fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)(iVar1 + iVar16 + iVar15),uVar13,(int)(uint)uVar2 >> 1,
               *(ushort *)(puVar17 + 2),*(ushort *)(puVar17 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar17 + 2) = (short)((int)(uint)param_1[0x14] >> 1);
  *(short *)(puVar17 + 6) = (short)((int)(uint)uVar3 >> 1);
  fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)(iVar1 + iStack_34 + iVar15),uVar12,(int)(uint)uVar2 >> 1,
               *(ushort *)(puVar17 + 2),*(ushort *)(puVar17 + 6));
  uVar3 = param_1[1];
  uVar4 = param_1[10];
  iVar1 = ((int)(uint)uVar3 >> 1) * ((int)(uint)uVar4 >> 1);
  uVar5 = param_1[0x13];
  uVar2 = *param_1;
  *(ushort *)(puVar17 + 2) = param_1[0x14] - 4;
  iVar15 = (int)(uint)uVar2 >> 1;
  *(ushort *)(puVar17 + 6) = uVar4;
  fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)((uint)uVar3 * (uint)uVar4 + iVar14 + (uint)uVar2),uVar6,
               (uint)(ushort)(uVar5 - 4),*(ushort *)(puVar17 + 2),*(ushort *)(puVar17 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar17 + 2) = (short)((int)(param_1[0x14] - 4) >> 1);
  *(short *)(puVar17 + 6) = (short)((int)(uint)uVar3 >> 1);
  fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)(iVar1 + iVar16 + iVar15),uVar8,(int)(uVar2 - 4) >> 1 & 0xffff,
               *(ushort *)(puVar17 + 2),*(ushort *)(puVar17 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar17 + 2) = (short)((int)(param_1[0x14] - 4) >> 1);
  *(short *)(puVar17 + 6) = (short)((int)(uint)uVar3 >> 1);
  fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)(iVar1 + iStack_34 + iVar15),uVar7,
               (int)(uVar2 - 4) >> 1 & 0xffff,*(ushort *)(puVar17 + 2),*(ushort *)(puVar17 + 6));
  uVar3 = param_1[1];
  uVar4 = param_1[10];
  uVar2 = *param_1;
  iVar1 = ((int)(uVar3 + 4) >> 1) * ((int)(uint)uVar4 >> 1);
  uVar5 = param_1[0x13];
  *(ushort *)(puVar17 + 2) = param_1[0x14] - 8;
  iVar15 = (int)(uVar2 + 4) >> 1;
  *(ushort *)(puVar17 + 6) = uVar4;
  fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)((uVar3 + 4) * (uint)uVar4 + 4 + iVar14 + (uint)uVar2),uVar9,
               (uint)(ushort)(uVar5 - 8),*(ushort *)(puVar17 + 2),*(ushort *)(puVar17 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar17 + 2) = (short)((int)(param_1[0x14] - 8) >> 1);
  *(short *)(puVar17 + 6) = (short)((int)(uint)uVar3 >> 1);
  fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)(iVar16 + iVar1 + iVar15),uVar11,(int)(uVar2 - 8) >> 1 & 0xffff
               ,*(ushort *)(puVar17 + 2),*(ushort *)(puVar17 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar17 + 2) = (short)((int)(param_1[0x14] - 8) >> 1);
  *(short *)(puVar17 + 6) = (short)((int)(uint)uVar3 >> 1);
  fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)(iVar1 + iStack_34 + iVar15),uVar10,
               (int)(uVar2 - 8) >> 1 & 0xffff,*(ushort *)(puVar17 + 2),*(ushort *)(puVar17 + 6));
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar3 = param_1[1];
    uVar4 = param_1[10];
    uVar5 = param_1[0x13];
    uVar2 = *param_1;
    *(ushort *)(puVar17 + 2) = param_1[0x14];
    *(short *)(puVar17 + 6) = (short)((int)(uint)uVar4 >> 1);
    fill_2d_region_with_byte_1048e314(param_1,(uint8_t *)
                         ((uint)uVar3 * ((int)(uint)uVar4 >> 1) + iStack_2c +
                         ((int)(uint)uVar2 >> 1)),0xee,(int)(uint)uVar5 >> 1,
                 *(ushort *)(puVar17 + 2),*(ushort *)(puVar17 + 6));
  }
  return;
}
