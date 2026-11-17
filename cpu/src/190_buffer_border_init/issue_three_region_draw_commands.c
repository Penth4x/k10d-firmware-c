/* @k10d issue_three_region_draw_commands @ 0x1048d4e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 190_buffer_border_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void issue_three_region_draw_commands(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uintptr_t sp;
  uint8_t *puVar15;
  uint8_t auStack_34 [8];
  int iStack_1c;
  
  puVar15 = auStack_34;
  iVar11 = get_sensor_singleton();
  iVar14 = *(int *)(iVar11 + 4);
  iVar11 = (uint)param_1[0x12] * 3;
  bVar5 = (&DAT_105984dc/*ROM*/)[iVar11];
  bVar6 = (&DAT_105984de/*ROM*/)[iVar11];
  bVar7 = (&DAT_105984dd/*ROM*/)[iVar11];
  iVar11 = *(int *)(param_1 + 2);
  iVar13 = *(int *)(param_1 + 4);
  if ((iVar13 == 0) && (*(int *)(param_1 + 6) == 0)) {
    iVar13 = (uint)param_1[10] * (uint)param_1[0xb] + iVar11;
    iStack_1c = ((int)(uint)param_1[10] >> 1) * ((int)(uint)param_1[0xb] >> 1);
    iVar12 = iVar13 + iStack_1c;
    iStack_1c = iStack_1c + iVar12;
  }
  else {
    iVar12 = *(int *)(param_1 + 6);
    iStack_1c = *(int *)(param_1 + 8);
  }
  uVar10 = (uint)param_1[1];
  uVar3 = param_1[10];
  uVar2 = *param_1;
  iVar8 = (int)(uint)uVar3 >> 1;
  iVar1 = ((int)uVar10 >> 1) * iVar8;
  iVar9 = (int)(uint)uVar2 >> 1;
  uVar4 = param_1[0x13];
  *(ushort *)(puVar15 + 2) = param_1[0x14];
  *(ushort *)(puVar15 + 6) = uVar3;
  init_object_with_two_ids_1048f478(iVar14,uVar10 * uVar3 + iVar11 + (uint)uVar2,(ushort)bVar5,uVar4,
               *(uint16_t *)(puVar15 + 2),*(uint16_t *)(puVar15 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar15 + 2) = (short)((int)(uint)param_1[0x14] >> 1);
  *(short *)(puVar15 + 6) = (short)((int)(uint)uVar3 >> 1);
  init_object_with_two_ids_1048f478(iVar14,iVar13 + iVar1 + iVar9,(ushort)bVar6,(short)((int)(uint)uVar2 >> 1),
               *(uint16_t *)(puVar15 + 2),*(uint16_t *)(puVar15 + 6));
  uVar2 = param_1[0x13];
  uVar3 = param_1[10];
  *(short *)(puVar15 + 2) = (short)((int)(uint)param_1[0x14] >> 1);
  *(short *)(puVar15 + 6) = (short)((int)(uint)uVar3 >> 1);
  init_object_with_two_ids_1048f478(iVar14,iVar1 + iVar12 + iVar9,(ushort)bVar7,(short)((int)(uint)uVar2 >> 1),
               *(uint16_t *)(puVar15 + 2),*(uint16_t *)(puVar15 + 6));
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar2 = param_1[0x13];
    uVar3 = param_1[10];
    *(ushort *)(puVar15 + 2) = param_1[0x14];
    *(short *)(puVar15 + 6) = (short)((int)(uint)uVar3 >> 1);
    init_object_with_two_ids_1048f478(iVar14,uVar10 * iVar8 + iStack_1c + iVar9,0xee,(short)((int)(uint)uVar2 >> 1),
                 *(uint16_t *)(puVar15 + 2),*(uint16_t *)(puVar15 + 6));
  }
  return;
}
