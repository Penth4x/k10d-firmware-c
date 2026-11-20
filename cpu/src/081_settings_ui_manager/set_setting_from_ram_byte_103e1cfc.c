/* @k10d set_setting_from_ram_byte_103e1cfc @ 0x103e1cfc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_from_ram_byte_103e1cfc(cls_10596d20 *param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  
  param_1->field_0x18 = param_2;
  if (param_2 == 0x1820012) {
    uVar2 = (uint)bRam10596d1d;
    uVar1 = 0x39;
  }
  else if (param_2 == 0x1820011) {
    uVar2 = (uint)bRam10596d1c;
    uVar1 = 0x39;
  }
  else if (param_2 == 0x1820018) {
    uVar2 = (uint)bRam10596d1d;
    uVar1 = 0x38;
  }
  else if (param_2 == 0x1820017) {
    uVar2 = (uint)bRam10596d1c;
    uVar1 = 0x38;
  }
  else if (param_2 == 0x182001e) {
    uVar2 = (uint)bRam10596d1d;
    uVar1 = 0x3b;
  }
  else if (param_2 == 0x182001d) {
    uVar2 = (uint)bRam10596d1c;
    uVar1 = 0x3b;
  }
  else if (param_2 == 0x1820024) {
    uVar2 = (uint)bRam10596d1d;
    uVar1 = 0x3a;
  }
  else if (param_2 == 0x1820023) {
    uVar2 = (uint)bRam10596d1c;
    uVar1 = 0x3a;
  }
  else if (param_2 == 0x182002a) {
    uVar2 = (uint)bRam10596d1d;
    uVar1 = 0x3e;
  }
  else if (param_2 == 0x1820029) {
    uVar2 = (uint)bRam10596d1c;
    uVar1 = 0x3e;
  }
  else if (param_2 == 0x1820030) {
    uVar2 = (uint)bRam10596d1d;
    uVar1 = 0x3f;
  }
  else {
    if (param_2 != 0x182002f) goto LAB_103e1e1a;
    uVar2 = (uint)bRam10596d1c;
    uVar1 = 0x3f;
  }
  setting_set(param_1->field_0x8,uVar1,uVar2);
LAB_103e1e1a:
  param_1->field_0x18 = param_2;
  return;
}
