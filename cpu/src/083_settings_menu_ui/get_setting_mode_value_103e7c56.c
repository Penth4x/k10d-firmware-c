/* @k10d get_setting_mode_value_103e7c56 @ 0x103e7c56
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific setting value (0x19d000a or 0x19d000f) based on a stored
 *   setting byte.
 * summary:
 *   Checks if param_2 equals 0x19d0014. If so, it reads setting ID 0xcd from the object's
 *   working copy (at offset 8) via setting_get. It compares this value against two RAM
 *   bytes (bRam10597338 and bRam10597339) to select an index (0, 1, or default 0xff). It
 *   then returns the corresponding value from a local array {0x19d000a, 0x19d000f}. If
 *   param_2 is not 0x19d0014, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_value_103e7c56(cls_1059733c *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x19d0014) {
    auStack_10[0] = 0x19d000a;
    auStack_10[1] = 0x19d000f;
    uVar3 = setting_get(param_1->field_0x8,0xcd);
    iVar2 = 0xff;
    if (bRam10597338 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10597339 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
