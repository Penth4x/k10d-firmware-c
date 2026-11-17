/* @k10d invoke_virtual_slot_3_on_object_array @ 0x104b1a26
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_object_array(int *param_1, uint32_t param_x1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    iVar3 = **(int **)(*param_1 + iVar1);
    (**(code **)(iVar3 + 0x2c))((int)*(int **)(*param_1 + iVar1) + (int)*(short *)(iVar3 + 0x28),0);
    iVar3 = **(int **)(param_1[1] + iVar1);
    uVar2 = uVar2 + 1 & 0xff;
    (**(code **)(iVar3 + 0x2c))
              ((int)*(int **)(param_1[1] + iVar1) + (int)*(short *)(iVar3 + 0x28),0);
    iVar3 = **(int **)(*param_1 + iVar1);
    (**(code **)(iVar3 + 0x1c))((int)*(int **)(*param_1 + iVar1) + (int)*(short *)(iVar3 + 0x18),0);
    iVar3 = **(int **)(param_1[1] + iVar1);
    (**(code **)(iVar3 + 0x1c))
              ((int)*(int **)(param_1[1] + iVar1) + (int)*(short *)(iVar3 + 0x18),0);
  } while (uVar2 < 2);
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    iVar3 = **(int **)(param_1[2] + iVar1);
    (**(code **)(iVar3 + 0x1c))
              ((int)*(int **)(param_1[2] + iVar1) + (int)*(short *)(iVar3 + 0x18),0);
    iVar3 = **(int **)(param_1[3] + iVar1);
    uVar2 = uVar2 + 1 & 0xff;
    (**(code **)(iVar3 + 0x1c))
              ((int)*(int **)(param_1[3] + iVar1) + (int)*(short *)(iVar3 + 0x18),0);
    iVar3 = **(int **)(param_1[4] + iVar1);
    (**(code **)(iVar3 + 0x1c))
              ((int)*(int **)(param_1[4] + iVar1) + (int)*(short *)(iVar3 + 0x18),0);
    iVar3 = **(int **)(param_1[0xd] + iVar1);
    (**(code **)(iVar3 + 0x1c))
              ((int)*(int **)(param_1[0xd] + iVar1) + (int)*(short *)(iVar3 + 0x18),0);
  } while (uVar2 < 2);
  iVar1 = **(int **)param_1[5];
  (**(code **)(iVar1 + 0x1c))((int)*(int **)param_1[5] + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)(param_1[5] + 4);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1[5] + 4) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)(param_1[5] + 8);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1[5] + 8) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = *(int *)param_1[0xf];
  (**(code **)(iVar1 + 0x14))(param_1[0xf] + (int)*(short *)(iVar1 + 0x10));
  iVar1 = *(int *)param_1[0x10];
  (**(code **)(iVar1 + 0x14))(param_1[0x10] + (int)*(short *)(iVar1 + 0x10));
  iVar1 = *(int *)param_1[0x11];
  (**(code **)(iVar1 + 0x14))(param_1[0x11] + (int)*(short *)(iVar1 + 0x10));
  (*(code *)0x104b423a/*ROM*/)(param_1[8]);
  iVar1 = *(int *)param_1[0x12];
  (**(code **)(iVar1 + 0x1c))(param_1[0x12] + (int)*(short *)(iVar1 + 0x18),0);
  return;
}
