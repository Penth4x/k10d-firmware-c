/* @k10d copy_and_notify_state_change @ 0x1047c6c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_and_notify_state_change(int param_1,int param_2)

{
  int *piVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int iVar4;
  
  puVar3 = (uint32_t *)(param_1 + 0x34);
  iVar4 = 0x14;
  do {
    iVar4 = iVar4 + -4;
    *(uint32_t *)(iVar4 + (int)puVar3) = *(uint32_t *)(iVar4 + param_2);
  } while (iVar4 != 0);
  piVar1 = *(int **)(*(int *)(param_1 + 0x70) + 8);
  iVar4 = *piVar1;
  (**(code **)(iVar4 + 0x14))((int)piVar1 + (int)*(short *)(iVar4 + 0x10),0x10009,puVar3);
  if (*(char *)(param_1 + 0x44) == '\0') {
    uVar2 = 0;
  }
  else {
    *puVar3 = 2;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
