/* @k10d get_setting_value_by_mode_103d3674 @ 0x103d3674
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a specific setting value (0x1b5000a or 0x1b5000f) based on the current mode
 *   setting.
 * summary:
 *   Checks if param_2 is 0x1b50014. If so, it reads setting 0xc3 from the object's mode
 *   field (param_1 + 8) using setting_get. It compares this value against two global bytes
 *   (bRam105961e4 and bRam105961e5) to select an index (0, 1, or default 0xff). It then
 *   returns the corresponding value from a local array {0x1b5000a, 0x1b5000f}. If the index
 *   is 0xff, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_value_by_mode_103d3674(cls_105961e8 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1b50014) {
    auStack_10[0] = 0x1b5000a;
    auStack_10[1] = 0x1b5000f;
    uVar3 = setting_get(param_1->field_0x8,0xc3);
    iVar2 = 0xff;
    if (bRam105961e4 == uVar3) {
      iVar2 = 0;
    }
    if (bRam105961e5 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
