/* @k10d set_setting_from_ram_pair @ 0x10409a44
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores param_2 at offset 0x18 and, for four specific values, calls setting_set with a
 *   byte from RAM and a constant index.
 * summary:
 *   Writes param_2 to *(param_1+0x18). If param_2 matches one of 0x1830011, 0x1830012,
 *   0x1830017, or 0x1830018, it selects a byte from bRam10599a84 or bRam10599a85 and a
 *   constant (0x3c or 0x3d), then calls setting_set(*(param_1+8), constant, byte). For
 *   other values, it only updates the field at 0x18. The function is virtual slot 9 of
 *   cls_10599a88.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_from_ram_pair(int param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 == 0x1830012) {
    uVar2 = (uint)bRam10599a85;
    uVar1 = 0x3c;
  }
  else if (param_2 == 0x1830011) {
    uVar2 = (uint)bRam10599a84;
    uVar1 = 0x3c;
  }
  else if (param_2 == 0x1830018) {
    uVar2 = (uint)bRam10599a85;
    uVar1 = 0x3d;
  }
  else {
    if (param_2 != 0x1830017) goto LAB_10409ab2;
    uVar2 = (uint)bRam10599a84;
    uVar1 = 0x3d;
  }
  setting_set(*(int *)(param_1 + 8),uVar1,uVar2);
LAB_10409ab2:
  *(int *)(param_1 + 0x18) = param_2;
  return;
}
