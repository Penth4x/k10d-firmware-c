/* @k10d get_setting_mode_value_103e595c @ 0x103e595c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific value (0x1a5000a or 0x1a5000f) based on a setting read via
 *   setting_get.
 * summary:
 *   The function checks if param_2 equals 0x1a50014. If so, it reads setting ID 0xcc from
 *   the object's working copy (at offset 8) using setting_get. It compares this value
 *   against two global bytes (bRam105970e4 and bRam105970e5) to select an index (0, 1, or
 *   default 0xff). It then returns the corresponding value from a local array {0x1a5000a,
 *   0x1a5000f}. If the index is 0xff, it returns 0. The specific meaning of the setting ID
 *   0xcc and the returned constants is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_value_103e595c(cls_105970e8 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1a50014) {
    auStack_10[0] = 0x1a5000a;
    auStack_10[1] = 0x1a5000f;
    uVar3 = setting_get(param_1->field_0x8,0xcc);
    iVar2 = 0xff;
    if (bRam105970e4 == uVar3) {
      iVar2 = 0;
    }
    if (bRam105970e5 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
