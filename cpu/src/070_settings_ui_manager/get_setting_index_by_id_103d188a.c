/* @k10d get_setting_index_by_id_103d188a @ 0x103d188a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 070_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_index_by_id_103d188a(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uintptr_t sp;
  uint32_t auStack_30 [10];
  
  if (param_2 == 0x18b0012) {
    uVar2 = setting_get(*(int *)(param_1 + 8),0x91);
    iVar1 = 0xff;
    if (bRam10595f98 == uVar2) {
      iVar1 = 0;
    }
    if (bRam10595f99 == uVar2) {
      iVar1 = 1;
    }
    cVar3 = -0x28;
  }
  else if (param_2 == 0x18b0018) {
    uVar2 = setting_get(*(int *)(param_1 + 8),0x92);
    iVar1 = 0xff;
    if (bRam10595f98 == uVar2) {
      iVar1 = 0;
    }
    if (bRam10595f99 == uVar2) {
      iVar1 = 1;
    }
    cVar3 = -0x20;
  }
  else if (param_2 == 0x18b001e) {
    uVar2 = setting_get(*(int *)(param_1 + 8),0x93);
    iVar1 = 0xff;
    if (bRam10595f98 == uVar2) {
      iVar1 = 0;
    }
    if (bRam10595f99 == uVar2) {
      iVar1 = 1;
    }
    cVar3 = -0x18;
  }
  else if (param_2 == 0x18b0024) {
    uVar2 = setting_get(*(int *)(param_1 + 8),0x94);
    iVar1 = 0xff;
    if (bRam10595f98 == uVar2) {
      iVar1 = 0;
    }
    if (bRam10595f99 == uVar2) {
      iVar1 = 1;
    }
    cVar3 = -0x10;
  }
  else {
    if (param_2 != 0x18b002a) {
      return 0x18b000d;
    }
    uVar2 = setting_get(*(int *)(param_1 + 8),0x95);
    iVar1 = 0xff;
    if (bRam10595f98 == uVar2) {
      iVar1 = 0;
    }
    if (bRam10595f99 == uVar2) {
      iVar1 = 1;
    }
    cVar3 = -8;
  }
  return *(uint32_t *)(&stack0xfffffff8 + (int)cVar3 + iVar1 * 4);
}
