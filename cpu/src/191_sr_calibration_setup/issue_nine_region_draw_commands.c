/* @k10d issue_nine_region_draw_commands @ 0x1048ddac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void issue_nine_region_draw_commands(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uintptr_t sp;
  uint8_t *puVar18;
  uint8_t auStack_50 [8];
  int iStack_38;
  int iStack_34;
  int iStack_2c;
  
  puVar18 = auStack_50;
  iVar16 = get_sensor_singleton();
  bVar14 = bRam1059852f;
  bVar13 = bRam1059852e;
  bVar12 = bRam1059852d;
  bVar11 = bRam1059852c;
  bVar10 = bRam1059852b;
  bVar9 = bRam1059852a;
  bVar8 = bRam10598529;
  bVar7 = bRam10598528;
  bVar6 = bRam10598527;
  iVar17 = *(int *)(iVar16 + 4);
  iVar16 = *(int *)(param_1 + 2);
  iStack_34 = *(int *)(param_1 + 4);
  if ((iStack_34 == 0) && (*(int *)(param_1 + 6) == 0)) {
    iStack_2c = ((int)(uint)param_1[10] >> 1) * ((int)(uint)param_1[0xb] >> 1);
    iStack_34 = (uint)param_1[10] * (uint)param_1[0xb] + iVar16;
    iStack_38 = iStack_34 + iStack_2c;
    iStack_2c = iStack_2c + iStack_38;
  }
  else {
    iStack_38 = *(int *)(param_1 + 6);
    iStack_2c = *(int *)(param_1 + 8);
  }
  uVar3 = param_1[1];
  uVar4 = param_1[10];
  iVar1 = ((int)(uint)uVar3 >> 1) * ((int)(uint)uVar4 >> 1);
  uVar5 = param_1[0x13];
  uVar2 = *param_1;
  *(ushort *)(puVar18 + 2) = param_1[0x14];
  iVar15 = (int)(uint)uVar2 >> 1;
  *(ushort *)(puVar18 + 6) = uVar4;
  init_object_with_two_ids_1048f478(iVar17,(uint)uVar3 * (uint)uVar4 + iVar16 + (uint)uVar2,(ushort)bVar12,uVar5,
               *(uint16_t *)(puVar18 + 2),*(uint16_t *)(puVar18 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar18 + 2) = (short)((int)(uint)param_1[0x14] >> 1);
  *(short *)(puVar18 + 6) = (short)((int)(uint)uVar3 >> 1);
  init_object_with_two_ids_1048f478(iVar17,iVar1 + iStack_34 + iVar15,(ushort)bVar14,(short)((int)(uint)uVar2 >> 1),
               *(uint16_t *)(puVar18 + 2),*(uint16_t *)(puVar18 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar18 + 2) = (short)((int)(uint)param_1[0x14] >> 1);
  *(short *)(puVar18 + 6) = (short)((int)(uint)uVar3 >> 1);
  init_object_with_two_ids_1048f478(iVar17,iVar1 + iStack_38 + iVar15,(ushort)bVar13,(short)((int)(uint)uVar2 >> 1),
               *(uint16_t *)(puVar18 + 2),*(uint16_t *)(puVar18 + 6));
  uVar3 = param_1[1];
  uVar4 = param_1[10];
  iVar1 = ((int)(uint)uVar3 >> 1) * ((int)(uint)uVar4 >> 1);
  uVar5 = param_1[0x13];
  uVar2 = *param_1;
  *(ushort *)(puVar18 + 2) = param_1[0x14] - 4;
  iVar15 = (int)(uint)uVar2 >> 1;
  *(ushort *)(puVar18 + 6) = uVar4;
  init_object_with_two_ids_1048f478(iVar17,(uint)uVar3 * (uint)uVar4 + iVar16 + (uint)uVar2,(ushort)bVar6,uVar5 - 4,
               *(uint16_t *)(puVar18 + 2),*(uint16_t *)(puVar18 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar18 + 2) = (short)((int)(param_1[0x14] - 4) >> 1);
  *(short *)(puVar18 + 6) = (short)((int)(uint)uVar3 >> 1);
  init_object_with_two_ids_1048f478(iVar17,iVar1 + iStack_34 + iVar15,(ushort)bVar8,(short)((int)(uVar2 - 4) >> 1),
               *(uint16_t *)(puVar18 + 2),*(uint16_t *)(puVar18 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar18 + 2) = (short)((int)(param_1[0x14] - 4) >> 1);
  *(short *)(puVar18 + 6) = (short)((int)(uint)uVar3 >> 1);
  init_object_with_two_ids_1048f478(iVar17,iVar1 + iStack_38 + iVar15,(ushort)bVar7,(short)((int)(uVar2 - 4) >> 1),
               *(uint16_t *)(puVar18 + 2),*(uint16_t *)(puVar18 + 6));
  uVar3 = param_1[1];
  uVar4 = param_1[10];
  uVar2 = *param_1;
  iVar1 = ((int)(uVar3 + 4) >> 1) * ((int)(uint)uVar4 >> 1);
  uVar5 = param_1[0x13];
  *(ushort *)(puVar18 + 2) = param_1[0x14] - 8;
  iVar15 = (int)(uVar2 + 4) >> 1;
  *(ushort *)(puVar18 + 6) = uVar4;
  init_object_with_two_ids_1048f478(iVar17,(uVar3 + 4) * (uint)uVar4 + 4 + iVar16 + (uint)uVar2,(ushort)bVar9,uVar5 - 8,
               *(uint16_t *)(puVar18 + 2),*(uint16_t *)(puVar18 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar18 + 2) = (short)((int)(param_1[0x14] - 8) >> 1);
  *(short *)(puVar18 + 6) = (short)((int)(uint)uVar3 >> 1);
  init_object_with_two_ids_1048f478(iVar17,iStack_34 + iVar1 + iVar15,(ushort)bVar11,(short)((int)(uVar2 - 8) >> 1),
               *(uint16_t *)(puVar18 + 2),*(uint16_t *)(puVar18 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar18 + 2) = (short)((int)(param_1[0x14] - 8) >> 1);
  *(short *)(puVar18 + 6) = (short)((int)(uint)uVar3 >> 1);
  init_object_with_two_ids_1048f478(iVar17,iVar1 + iStack_38 + iVar15,(ushort)bVar10,(short)((int)(uVar2 - 8) >> 1),
               *(uint16_t *)(puVar18 + 2),*(uint16_t *)(puVar18 + 6));
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar3 = param_1[1];
    uVar4 = param_1[10];
    uVar5 = param_1[0x13];
    uVar2 = *param_1;
    *(ushort *)(puVar18 + 2) = param_1[0x14];
    *(short *)(puVar18 + 6) = (short)((int)(uint)uVar4 >> 1);
    init_object_with_two_ids_1048f478(iVar17,(uint)uVar3 * ((int)(uint)uVar4 >> 1) + iStack_2c + ((int)(uint)uVar2 >> 1),
                 0xee,(short)((int)(uint)uVar5 >> 1),*(uint16_t *)(puVar18 + 2),
                 *(uint16_t *)(puVar18 + 6));
  }
  return;
}
