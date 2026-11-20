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
    (((vtbl_entry*)(iVar3))[5].fn)((int)*(int **)(*param_1 + iVar1) + (int)((vtbl_entry*)(iVar3))[5].adj,0);
    iVar3 = **(int **)(param_1[1] + iVar1);
    uVar2 = uVar2 + 1 & 0xff;
    (((vtbl_entry*)(iVar3))[5].fn)
              ((int)*(int **)(param_1[1] + iVar1) + (int)((vtbl_entry*)(iVar3))[5].adj,0);
    iVar3 = **(int **)(*param_1 + iVar1);
    (((vtbl_entry*)(iVar3))[3].fn)((int)*(int **)(*param_1 + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    iVar3 = **(int **)(param_1[1] + iVar1);
    (((vtbl_entry*)(iVar3))[3].fn)
              ((int)*(int **)(param_1[1] + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
  } while (uVar2 < 2);
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    iVar3 = **(int **)(param_1[2] + iVar1);
    (((vtbl_entry*)(iVar3))[3].fn)
              ((int)*(int **)(param_1[2] + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    iVar3 = **(int **)(param_1[3] + iVar1);
    uVar2 = uVar2 + 1 & 0xff;
    (((vtbl_entry*)(iVar3))[3].fn)
              ((int)*(int **)(param_1[3] + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    iVar3 = **(int **)(param_1[4] + iVar1);
    (((vtbl_entry*)(iVar3))[3].fn)
              ((int)*(int **)(param_1[4] + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    iVar3 = **(int **)(param_1[0xd] + iVar1);
    (((vtbl_entry*)(iVar3))[3].fn)
              ((int)*(int **)(param_1[0xd] + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
  } while (uVar2 < 2);
  iVar1 = **(int **)param_1[5];
  (((vtbl_entry*)(iVar1))[3].fn)((int)*(int **)param_1[5] + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = **(int **)(param_1[5] + 4);
  (((vtbl_entry*)(iVar1))[3].fn)((int)*(int **)(param_1[5] + 4) + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = **(int **)(param_1[5] + 8);
  (((vtbl_entry*)(iVar1))[3].fn)((int)*(int **)(param_1[5] + 8) + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = *(int *)param_1[0xf];
  (((vtbl_entry*)(iVar1))[2].fn)(param_1[0xf] + (int)((vtbl_entry*)(iVar1))[2].adj);
  iVar1 = *(int *)param_1[0x10];
  (((vtbl_entry*)(iVar1))[2].fn)(param_1[0x10] + (int)((vtbl_entry*)(iVar1))[2].adj);
  iVar1 = *(int *)param_1[0x11];
  (((vtbl_entry*)(iVar1))[2].fn)(param_1[0x11] + (int)((vtbl_entry*)(iVar1))[2].adj);
  (*(code *)0x104b423a/*ROM*/)(param_1[8]);
  iVar1 = *(int *)param_1[0x12];
  (((vtbl_entry*)(iVar1))[3].fn)(param_1[0x12] + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  return;
}
