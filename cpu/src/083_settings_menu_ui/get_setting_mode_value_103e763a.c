/* @k10d get_setting_mode_value_103e763a @ 0x103e763a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific value (0x1b1000a or 0x1b1000f) based on a camera setting read
 *   via setting_get.
 * summary:
 *   The function checks if param_2 equals 0x1b10014. If so, it reads setting 0xc9 from the
 *   object's working copy (param_1 + 8) using setting_get. It compares the result against
 *   two global bytes (bRam105972a4 and bRam105972a5) to select an index (0, 1, or default
 *   0xff). It then returns the corresponding value from a local array {0x1b1000a,
 *   0x1b1000f}. If param_2 is not 0x1b10014, it returns 0. The role of the specific setting
 *   0xc9 and the meaning of the returned constants are not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_value_103e763a(cls_105972a8 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1b10014) {
    auStack_10[0] = 0x1b1000a;
    auStack_10[1] = 0x1b1000f;
    uVar3 = setting_get(param_1->field_0x8,0xc9);
    iVar2 = 0xff;
    if (bRam105972a4 == uVar3) {
      iVar2 = 0;
    }
    if (bRam105972a5 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
