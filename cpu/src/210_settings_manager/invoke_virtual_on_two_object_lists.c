/* @k10d invoke_virtual_on_two_object_lists @ 0x104ab992
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_on_two_object_lists(int param_1,uint32_t param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x14) != '\0') {
    do {
      piVar1 = *(int **)(uVar2 * 4 + *(int *)(param_1 + 0x1c));
      iVar3 = *piVar1;
      (**(code **)(iVar3 + 0x14))((int)piVar1 + (int)*(short *)(iVar3 + 0x10),param_2);
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x14));
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x15) != '\0') {
    do {
      piVar1 = *(int **)(uVar2 * 4 + *(int *)(param_1 + 0x20));
      iVar3 = *piVar1;
      (**(code **)(iVar3 + 0x14))((int)piVar1 + (int)*(short *)(iVar3 + 0x10),param_2);
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x15));
  }
  return;
}
