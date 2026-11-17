/* @k10d get_setting_option_pair @ 0x103f1f02
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 087_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pair of setting IDs based on a setting value when a specific command code is
 *   passed.
 * summary:
 *   Checks if param_2 equals 0x1b40014. If so, it reads setting 0xba from the object's
 *   working copy (at offset 8) via setting_get. It compares the value to two RAM globals
 *   (bRam10597bec, bRam10597bed) to select an index (0, 1, or default 0xff). It then
 *   returns the corresponding value from a local array {0x1b4000a, 0x1b4000f}. The function
 *   acts as a virtual method (slot 8) that maps a specific setting state to one of two
 *   related setting IDs.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_option_pair(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1b40014) {
    auStack_10[0] = 0x1b4000a;
    auStack_10[1] = 0x1b4000f;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xba);
    iVar2 = 0xff;
    if (bRam10597bec == uVar3) {
      iVar2 = 0;
    }
    if (bRam10597bed == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
