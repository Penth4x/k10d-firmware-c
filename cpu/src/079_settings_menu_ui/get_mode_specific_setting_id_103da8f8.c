/* @k10d get_mode_specific_setting_id_103da8f8 @ 0x103da8f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific setting ID based on a global mode byte and a requested setting
 *   value.
 * summary:
 *   Checks if param_2 equals 0x1a00019. If so, it reads setting ID 200 from the object's
 *   working copy (param_1+8) using setting_get. It compares this value against three global
 *   bytes (bRam1059668c, d, e) to determine an index (0, 1, or 2, defaulting to 0xff). It
 *   then returns the corresponding value from a local array {0x1a0000a, 0x1a0000f,
 *   0x1a00014}. If param_2 is not 0x1a00019, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_mode_specific_setting_id_103da8f8(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  uVar1 = 0;
  if (param_2 == 0x1a00019) {
    auStack_14[0] = 0x1a0000a;
    auStack_14[1] = 0x1a0000f;
    auStack_14[2] = 0x1a00014;
    uVar3 = setting_get(*(int *)(param_1 + 8),200);
    iVar2 = 0xff;
    if (bRam1059668c == uVar3) {
      iVar2 = 0;
    }
    if (bRam1059668d == uVar3) {
      iVar2 = 1;
    }
    if (bRam1059668e == uVar3) {
      iVar2 = 2;
    }
    uVar1 = auStack_14[iVar2];
  }
  return uVar1;
}
