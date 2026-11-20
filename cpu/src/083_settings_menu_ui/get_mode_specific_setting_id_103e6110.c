/* @k10d get_mode_specific_setting_id_103e6110 @ 0x103e6110
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific setting ID from a lookup table based on the current setting
 *   value.
 * summary:
 *   The function checks if param_2 matches the constant 0x1a9001e. If so, it reads setting
 *   0xb1 from the object's working copy (param_1 + 8) using setting_get. It then compares
 *   this value against four consecutive RAM bytes (0x10597178-0x1059717b) to determine an
 *   index (0-3). Finally, it returns the corresponding value from a local array of four
 *   constants (0x1a9000a, 0x1a9000f, 0x1a90014, 0x1a90019). If the initial check fails or
 *   no match is found, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_mode_specific_setting_id_103e6110(cls_1059717c *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_18 [4];
  
  uVar1 = 0;
  if (param_2 == 0x1a9001e) {
    auStack_18[0] = 0x1a9000a;
    auStack_18[1] = 0x1a9000f;
    auStack_18[2] = 0x1a90014;
    auStack_18[3] = 0x1a90019;
    uVar3 = setting_get(param_1->field_0x8,0xb1);
    iVar2 = 0xff;
    if (bRam10597178 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10597179 == uVar3) {
      iVar2 = 1;
    }
    if (bRam1059717a == uVar3) {
      iVar2 = 2;
    }
    if (bRam1059717b == uVar3) {
      iVar2 = 3;
    }
    uVar1 = auStack_18[iVar2];
  }
  return uVar1;
}
