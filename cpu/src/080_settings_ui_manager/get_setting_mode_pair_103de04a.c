/* @k10d get_setting_mode_pair_103de04a @ 0x103de04a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pair of setting IDs based on a specific setting value and a magic parameter
 *   check.
 * summary:
 *   Checks if param_2 equals 0x1b30014. If so, it reads setting 0xb3 from the object's
 *   context (param_1 + 8) using setting_get. It compares this value against two global
 *   bytes (bRam10596964 and bRam10596965) to select an index (0, 1, or default -1). It then
 *   returns the corresponding value from a local array {0x1b3000a, 0x1b3000f}. The function
 *   acts as a lookup or state resolver for a specific configuration mode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_pair_103de04a(cls_10596968 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1b30014) {
    auStack_10[0] = 0x1b3000a;
    auStack_10[1] = 0x1b3000f;
    uVar3 = setting_get(param_1->field_0x8,0xb3);
    iVar2 = 0xff;
    if (bRam10596964 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10596965 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
