/* @k10d copy_struct_and_invoke_virtual @ 0x1047c5b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_struct_and_invoke_virtual(int param_1,int param_2)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = 0x14;
  do {
    iVar3 = iVar3 + -4;
    *(uint32_t *)(iVar3 + param_1 + 0x34) = *(uint32_t *)(iVar3 + param_2);
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x34) == 3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x70) + 8);
    iVar3 = *piVar1;
    uVar2 = (**(code **)(iVar3 + 0x14))((int)piVar1 + (int)*(short *)(iVar3 + 0x10),0x10034);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
