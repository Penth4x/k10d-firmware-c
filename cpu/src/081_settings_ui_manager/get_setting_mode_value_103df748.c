/* @k10d get_setting_mode_value_103df748 @ 0x103df748
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific value (0x1b2000a or 0x1b2000f) based on a setting read from the
 *   object's working copy.
 * summary:
 *   Checks if param_2 equals 0x1b20014. If so, it reads setting 0xca from the object's
 *   working copy (param_1 + 8) using setting_get. It compares this value against two global
 *   bytes (bRam10596ac0 and bRam10596ac1) to select an index (0, 1, or default 0xff). It
 *   then returns the corresponding value from a local array {0x1b2000a, 0x1b2000f}. If the
 *   index is 0xff, it returns 0. The function acts as a virtual method (slot 8) for class
 *   cls_10596ac4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_value_103df748(cls_10596ac4 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1b20014) {
    auStack_10[0] = 0x1b2000a;
    auStack_10[1] = 0x1b2000f;
    uVar3 = setting_get(param_1->field_0x8,0xca);
    iVar2 = 0xff;
    if (bRam10596ac0 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10596ac1 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
