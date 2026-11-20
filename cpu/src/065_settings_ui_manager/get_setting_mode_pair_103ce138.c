/* @k10d get_setting_mode_pair_103ce138 @ 0x103ce138
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pair of setting IDs based on a comparison between a stored byte and a setting
 *   value.
 * summary:
 *   The function checks if param_2 matches the constant 0x1a30014. If so, it reads setting
 *   0xd2 from the object's working copy (param_1 + 8). It then compares this value against
 *   two global bytes (bRam10595c1c and bRam10595c1d) to select an index (0, 1, or default
 *   0xff). Finally, it returns the corresponding value from a local array {0x1a3000a,
 *   0x1a3000f}. The specific meaning of the setting IDs and global bytes is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_pair_103ce138(cls_10595c20 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1a30014) {
    auStack_10[0] = 0x1a3000a;
    auStack_10[1] = 0x1a3000f;
    uVar3 = setting_get(param_1->field_0x8,0xd2);
    iVar2 = 0xff;
    if (bRam10595c1c == uVar3) {
      iVar2 = 0;
    }
    if (bRam10595c1d == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
