/* @k10d get_setting_mode_value_103ce754 @ 0x103ce754
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific value (0x1b8000f or 0x1b8000a) based on a setting read from the
 *   object's working copy.
 * summary:
 *   This virtual method (slot 8 of cls_10595cb4) checks if param_2 equals 0x1b80014. If so,
 *   it reads setting 0xcf from the working copy pointer stored at param_1+8 via
 *   setting_get. It compares this value against two global bytes (bRam10595cb0 and
 *   bRam10595cb1) to select an index (0, 1, or default 0xff). The function then returns the
 *   corresponding value from a local array {0x1b8000f, 0x1b8000a}. If the index is 0xff, it
 *   returns 0. The specific camera subsystem role is not determinable from the generic
 *   setting access and constant values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_value_103ce754(cls_10595cb4 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1b80014) {
    auStack_10[0] = 0x1b8000f;
    auStack_10[1] = 0x1b8000a;
    uVar3 = setting_get(param_1->field_0x8,0xcf);
    iVar2 = 0xff;
    if (bRam10595cb0 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10595cb1 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
