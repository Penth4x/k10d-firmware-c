/* @k10d get_setting_pair_by_id @ 0x103cdb1c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_pair_by_id(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1a10014) {
    auStack_10[0] = 0x1a1000a;
    auStack_10[1] = 0x1a1000f;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xbf);
    iVar2 = 0xff;
    if (bRam10595b88 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10595b89 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
