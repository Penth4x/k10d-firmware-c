/* @k10d normalize_mode_index_and_notify @ 0x1036e9ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void normalize_mode_index_and_notify(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint8_t uVar3;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else if (iVar1 == 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  *(uint32_t *)(param_1 + 0xb0) = uVar2;
  uVar3 = (*(code *)0x1036ff30/*ROM*/)();
  set_setting_0x70((void *)0x800158d4/*SDRAM*/,uVar3);
  return;
}
