/* @k10d issue_three_region_commands @ 0x1048d93e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void issue_three_region_commands(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint32_t *puVar19;
  uintptr_t sp;
  uint8_t *puVar20;
  uint8_t auStack_40 [12];
  
  puVar20 = auStack_40;
  iVar15 = get_sensor_singleton();
  iVar15 = *(int *)(iVar15 + 4);
  puVar19 = *(uint32_t **)(param_1 + 0x12);
  uVar8 = *puVar19;
  uVar9 = puVar19[1];
  uVar10 = puVar19[2];
  uVar3 = *(ushort *)(puVar19 + 3);
  uVar4 = *(ushort *)((int)puVar19 + 0xe);
  iVar12 = *(int *)(param_1 + 2);
  iVar17 = *(int *)(param_1 + 4);
  if ((iVar17 == 0) && (*(int *)(param_1 + 6) == 0)) {
    iVar17 = (uint)param_1[10] * (uint)param_1[0xb] + iVar12;
    iVar18 = ((int)(uint)param_1[10] >> 1) * ((int)(uint)param_1[0xb] >> 1);
    iVar16 = iVar17 + iVar18;
    iVar18 = iVar18 + iVar16;
  }
  else {
    iVar16 = *(int *)(param_1 + 6);
    iVar18 = *(int *)(param_1 + 8);
  }
  uVar14 = (uint)param_1[1];
  uVar5 = param_1[10];
  iVar13 = (int)(uint)uVar5 >> 1;
  uVar2 = *param_1;
  iVar1 = ((int)uVar14 >> 1) * iVar13;
  iVar11 = (int)(uint)uVar2 >> 1;
  *(ushort *)(puVar20 + 2) = uVar4;
  *(ushort *)(puVar20 + 6) = uVar3;
  *(ushort *)(puVar20 + 10) = uVar5;
  dispatch_virtual_method_one(iVar15,uVar8,uVar14 * uVar5 + iVar12 + (uint)uVar2,uVar3,*(uint16_t *)(puVar20 + 2)
               ,*(uint16_t *)(puVar20 + 6),*(uint16_t *)(puVar20 + 10));
  uVar7 = (uint16_t)((int)(uint)uVar3 >> 1);
  uVar3 = param_1[10];
  uVar6 = (uint16_t)((int)(uint)uVar4 >> 1);
  *(uint16_t *)(puVar20 + 2) = uVar6;
  *(uint16_t *)(puVar20 + 6) = uVar7;
  *(short *)(puVar20 + 10) = (short)((int)(uint)uVar3 >> 1);
  dispatch_virtual_method_one(iVar15,uVar9,iVar17 + iVar1 + iVar11,uVar7,*(uint16_t *)(puVar20 + 2),
               *(uint16_t *)(puVar20 + 6),*(uint16_t *)(puVar20 + 10));
  uVar3 = param_1[10];
  *(uint16_t *)(puVar20 + 2) = uVar6;
  *(uint16_t *)(puVar20 + 6) = uVar7;
  *(short *)(puVar20 + 10) = (short)((int)(uint)uVar3 >> 1);
  dispatch_virtual_method_one(iVar15,uVar10,iVar1 + iVar16 + iVar11,uVar7,*(uint16_t *)(puVar20 + 2),
               *(uint16_t *)(puVar20 + 6),*(uint16_t *)(puVar20 + 10));
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar3 = param_1[10];
    *(ushort *)(puVar20 + 2) = uVar4;
    *(short *)(puVar20 + 6) = (short)((int)(uint)uVar3 >> 1);
    init_object_with_two_ids_1048f478(iVar15,uVar14 * iVar13 + iVar18 + iVar11,0xee,uVar7,*(uint16_t *)(puVar20 + 2),
                 *(uint16_t *)(puVar20 + 6));
  }
  return;
}
