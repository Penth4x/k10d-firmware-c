/* @k10d get_setting_mode_value_103e3cb2 @ 0x103e3cb2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific value (0x1b0000a or 0x1b0000f) based on a setting read from the
 *   working copy.
 * summary:
 *   The function checks if param_2 equals 0x1b00014. If so, it reads setting 0xb9 from the
 *   object's working copy (at param_1+8) via setting_get. It compares this value against
 *   two global bytes (bRam10596ee8 and bRam10596ee9) to select an index (0, 1, or default
 *   0xff). It then returns the corresponding value from a local array {0x1b0000a,
 *   0x1b0000f}. If param_2 is not 0x1b00014, it returns 0. The role of the specific setting
 *   0xb9 and the global bytes is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_value_103e3cb2(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1b00014) {
    auStack_10[0] = 0x1b0000a;
    auStack_10[1] = 0x1b0000f;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xb9);
    iVar2 = 0xff;
    if (bRam10596ee8 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10596ee9 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
