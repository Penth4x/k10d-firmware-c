/* @k10d get_setting_mode_pair_103e8272 @ 0x103e8272
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a pair of setting IDs based on a specific setting value when a magic parameter
 *   matches.
 * summary:
 *   Checks if param_2 equals 0x1a40014. If so, it reads setting 0xcb via setting_get and
 *   compares it to two RAM bytes (bRam105973cc, bRam105973cd). It returns 0x1a4000a,
 *   0x1a4000f, or 0xff depending on which byte matches the setting value. The function acts
 *   as a virtual method (slot 8) in class cls_105973d0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_pair_103e8272(cls_105973d0 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1a40014) {
    auStack_10[0] = 0x1a4000a;
    auStack_10[1] = 0x1a4000f;
    uVar3 = setting_get(param_1->field_0x8,0xcb);
    iVar2 = 0xff;
    if (bRam105973cc == uVar3) {
      iVar2 = 0;
    }
    if (bRam105973cd == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
