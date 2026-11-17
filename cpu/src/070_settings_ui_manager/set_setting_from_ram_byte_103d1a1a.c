/* @k10d set_setting_from_ram_byte_103d1a1a @ 0x103d1a1a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 070_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_from_ram_byte_103d1a1a(int param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 == 0x18b0015) {
    uVar2 = (uint)bRam10595f99;
    uVar1 = 0x91;
  }
  else if (param_2 == 0x18b0014) {
    uVar2 = (uint)bRam10595f98;
    uVar1 = 0x91;
  }
  else if (param_2 == 0x18b001b) {
    uVar2 = (uint)bRam10595f99;
    uVar1 = 0x92;
  }
  else if (param_2 == 0x18b001a) {
    uVar2 = (uint)bRam10595f98;
    uVar1 = 0x92;
  }
  else if (param_2 == 0x18b0021) {
    uVar2 = (uint)bRam10595f99;
    uVar1 = 0x93;
  }
  else if (param_2 == 0x18b0020) {
    uVar2 = (uint)bRam10595f98;
    uVar1 = 0x93;
  }
  else if (param_2 == 0x18b0027) {
    uVar2 = (uint)bRam10595f99;
    uVar1 = 0x94;
  }
  else if (param_2 == 0x18b0026) {
    uVar2 = (uint)bRam10595f98;
    uVar1 = 0x94;
  }
  else if (param_2 == 0x18b002d) {
    uVar2 = (uint)bRam10595f99;
    uVar1 = 0x95;
  }
  else {
    if (param_2 != 0x18b002c) goto LAB_103d1b0c;
    uVar2 = (uint)bRam10595f98;
    uVar1 = 0x95;
  }
  setting_set(*(int *)(param_1 + 8),uVar1,uVar2);
LAB_103d1b0c:
  *(int *)(param_1 + 0x18) = param_2;
  return;
}
