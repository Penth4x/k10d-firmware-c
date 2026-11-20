/* @k10d write_sensor_frame_data @ 0x104ec44c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_sensor_frame_data(cls_105c2a58 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint16_t *puVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  uintptr_t sp;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  short sStack_a;
  
  (*(code *)0x1044e7ee/*ROM*/)(param_1->field_0x8,1);
  iVar4 = param_2 * 2;
  (*(code *)0x1044e838/*ROM*/)(param_1->field_0x8,*(uint16_t *)(*(int *)(param_3 + 0x20) + iVar4));
  iVar5 = param_2 * 4;
  psVar6 = *(short **)(*(int *)(param_3 + 0x1c) + iVar5);
  sStack_14 = *psVar6 << 2;
  sStack_12 = psVar6[1] << 2;
  sStack_10 = psVar6[2] << 2;
  sStack_e = psVar6[3] << 2;
  sStack_c = psVar6[4] << 2;
  sStack_a = psVar6[5] << 2;
  (*(code *)0x1044e870/*ROM*/)(param_1->field_0x8,&sStack_14);
  (*(code *)0x1044e930/*ROM*/)(param_1->field_0x8,*(uint16_t *)(*(int *)(param_3 + 8) + iVar4));
  (*(code *)0x1044e96e/*ROM*/)(param_1->field_0x8,*(uint16_t *)(*(int *)(param_3 + 0x10) + iVar4));
  puVar2 = (uint16_t *)(*(code *)0x1044ef6a/*ROM*/)(param_1->field_0x8);
  iVar1 = 0x1ff;
  iVar4 = *(int *)(*(int *)(param_3 + 4) + iVar5);
  iVar7 = 0;
  do {
    *puVar2 = *(uint16_t *)(iVar7 + iVar4);
    puVar2[1] = *(uint16_t *)(iVar7 + 2 + iVar4);
    puVar2[2] = *(uint16_t *)(iVar7 + 4 + iVar4);
    puVar2[3] = *(uint16_t *)(iVar7 + 6 + iVar4);
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
    iVar7 = iVar7 + 8;
  } while (-1 < iVar1);
  puVar2 = (uint16_t *)(*(code *)0x1044ef72/*ROM*/)(param_1->field_0x8);
  iVar1 = 0x1ff;
  iVar4 = *(int *)(*(int *)(param_3 + 0xc) + iVar5);
  iVar5 = 0;
  do {
    *puVar2 = *(uint16_t *)(iVar5 + iVar4);
    puVar2[1] = *(uint16_t *)(iVar5 + 2 + iVar4);
    puVar2[2] = *(uint16_t *)(iVar5 + 4 + iVar4);
    puVar2[3] = *(uint16_t *)(iVar5 + 6 + iVar4);
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
    iVar5 = iVar5 + 8;
  } while (-1 < iVar1);
  uVar3 = (*(code *)0x1044ef7a/*ROM*/)(param_1->field_0x8);
  (*(code *)0x1052fd72/*ROM*/)(param_3,param_2,uVar3);
  return;
}
