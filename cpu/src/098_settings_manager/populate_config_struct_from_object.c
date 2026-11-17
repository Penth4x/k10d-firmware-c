/* @k10d populate_config_struct_from_object @ 0x1042112c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 098_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_config_struct_from_object(int param_1,uint16_t *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint uVar7;
  short sVar8;
  uint16_t uVar9;
  int iVar10;
  
  iVar1 = **(int **)(param_1 + 0x30);
  iVar3 = (**(code **)(iVar1 + 0xd4))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar1 + 0xd0));
  iVar3 = iVar3 * 2;
  iVar1 = **(int **)(param_1 + 0x30);
  iVar1 = (**(code **)(iVar1 + 0x14))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar1 + 0x10));
  iVar1 = (*(code *)0x1041b790/*ROM*/)(param_1,(iVar1 * 3) / 2);
  if (param_3 == 0) {
    iVar10 = **(int **)(param_1 + 0x54);
    iVar2 = **(int **)(param_1 + 0x30);
    iVar2 = (**(code **)(iVar2 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar2 + 0x98));
    uVar4 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar2 * iVar3 + iVar10);
    iVar2 = **(int **)(param_1 + 0x30);
    iVar2 = (**(code **)(iVar2 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar2 + 0x98));
    uVar5 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar3 * iVar2 * 2 + iVar10);
    iVar2 = **(int **)(param_1 + 0x30);
    iVar2 = (**(code **)(iVar2 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar2 + 0x98));
    uVar6 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar3 * iVar2 * 3 + iVar10);
    *(int *)(param_2 + 2) = iVar10;
    *(uint32_t *)(param_2 + 4) = uVar4;
    *(uint32_t *)(param_2 + 6) = uVar6;
    *(uint32_t *)(param_2 + 8) = uVar5;
    iVar3 = **(int **)(param_1 + 0x30);
    uVar7 = (**(code **)(iVar3 + 0xcc))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar3 + 200));
    *param_2 = (short)(uVar7 >> 1);
    iVar3 = **(int **)(param_1 + 0x30);
    sVar8 = (**(code **)(iVar3 + 0xd4))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar3 + 0xd0));
    param_2[1] = sVar8 << 1;
    iVar3 = **(int **)(param_1 + 0x30);
    uVar9 = (**(code **)(iVar3 + 0x14))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar3 + 0x10));
    param_2[0x12] = uVar9;
    *(uint32_t *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1a) = iVar1 << 1;
    *(int *)(param_2 + 0x1c) = iVar1;
    *(int *)(param_2 + 0x1e) = iVar1 * 3;
    *(uint32_t *)(param_2 + 0x20) = 0;
    *(uint32_t *)(param_2 + 0x22) = 2;
    *(uint8_t *)(param_2 + 0x48) = 1;
    param_2[0x2c] = 0;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
    param_2[0x34] = 0x100;
    param_2[0x35] = 0x100;
    param_2[0x36] = 0x100;
    param_2[0x37] = 0x100;
    *(uint8_t *)(param_2 + 0x38) = 0x26;
    *(uint8_t *)((int)param_2 + 0x71) = 0x25;
    *(uint8_t *)(param_2 + 0x39) = 0x25;
    *(uint8_t *)((int)param_2 + 0x73) = 0xe;
    *(uint8_t *)((int)param_2 + 0x91) = 0;
    *(uint32_t *)(param_2 + 0x3a) = 0xfffff000;
    *(uint32_t *)(param_2 + 0x3c) = 0xffffffff;
    *(uint32_t *)(param_2 + 0x3e) = 0xfffffff0;
    *(uint32_t *)(param_2 + 0x40) = 0;
    *(uint32_t *)(param_2 + 0x42) = 0;
    *(uint8_t *)(param_2 + 0x44) = 0xfe;
    *(uint8_t *)(param_2 + 0x45) = 0xfe;
    *(uint8_t *)(param_2 + 0x46) = 0xfe;
    *(uint8_t *)(param_2 + 0x47) = 0xfe;
    *(uint8_t *)((int)param_2 + 0x89) = 1;
    *(uint8_t *)((int)param_2 + 0x8b) = 1;
    *(uint8_t *)((int)param_2 + 0x8d) = 1;
    iVar1 = 0x8f;
  }
  else {
    iVar10 = *(int *)(*(int *)(param_1 + 0x54) + 4);
    iVar2 = **(int **)(param_1 + 0x30);
    iVar2 = (**(code **)(iVar2 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar2 + 0x98));
    uVar4 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar2 * iVar3 + iVar10);
    iVar2 = **(int **)(param_1 + 0x30);
    iVar2 = (**(code **)(iVar2 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar2 + 0x98));
    uVar5 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar3 * iVar2 * 2 + iVar10);
    iVar2 = **(int **)(param_1 + 0x30);
    iVar2 = (**(code **)(iVar2 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar2 + 0x98));
    uVar6 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar3 * iVar2 * 3 + iVar10);
    *(int *)(param_2 + 10) = iVar10;
    *(uint32_t *)(param_2 + 0xc) = uVar4;
    *(uint32_t *)(param_2 + 0xe) = uVar6;
    *(uint32_t *)(param_2 + 0x10) = uVar5;
    *(uint8_t *)((int)param_2 + 0x91) = 1;
    *(uint32_t *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1a) = iVar1 << 1;
    *(int *)(param_2 + 0x1c) = iVar1;
    *(int *)(param_2 + 0x1e) = iVar1 * 3;
    *(uint32_t *)(param_2 + 0x20) = 0;
    *(uint32_t *)(param_2 + 0x22) = 2;
    iVar1 = 0x90;
  }
  *(uint8_t *)(iVar1 + (int)param_2) = 1;
  return;
}
