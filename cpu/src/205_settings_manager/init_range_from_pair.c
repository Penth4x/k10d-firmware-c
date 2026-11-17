/* @k10d init_range_from_pair @ 0x1049f660
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_range_from_pair(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  *(int *)(param_1 + 0x14) = iVar2;
  iVar1 = param_2[1];
  *(int *)(param_1 + 0x18) = iVar1;
  *(int *)(param_1 + 0x2c) = iVar2 + 0xc;
  *(int *)(param_1 + 0x30) = iVar1 + -0xc;
  (*(code *)0x104a77a0/*ROM*/)(param_1 + 0x28,1);
  return 1;
}
