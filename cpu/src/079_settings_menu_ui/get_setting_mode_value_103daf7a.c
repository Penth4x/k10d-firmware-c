/* @k10d get_setting_mode_value_103daf7a @ 0x103daf7a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific value (0x1aa000a or 0x1aa000f) based on a setting read from the
 *   working copy.
 * summary:
 *   The function checks if param_2 equals 0x1aa0014. If so, it reads setting 0xbd from the
 *   object's working copy (param_1 + 8) using setting_get. It compares the result against
 *   two global bytes (bRam10596720 and bRam10596721) to select an index (0, 1, or default
 *   0xff). It then returns the corresponding value from a local array {0x1aa000a,
 *   0x1aa000f}. The specific meaning of the setting ID 0xbd and the returned constants is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_value_103daf7a(cls_10596724 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1aa0014) {
    auStack_10[0] = 0x1aa000a;
    auStack_10[1] = 0x1aa000f;
    uVar3 = setting_get(param_1->field_0x8,0xbd);
    iVar2 = 0xff;
    if (bRam10596720 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10596721 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
