/* @k10d get_setting_value_by_mode_103dfd64 @ 0x103dfd64
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a setting value (0x19a000a or 0x19a000f) selected by comparing a specific
 *   setting against two RAM bytes.
 * summary:
 *   Checks if param_2 equals 0x19a0014. If so, it reads setting 0xb7 from the object's
 *   working copy (at offset 8) using setting_get. It compares this value against
 *   bRam10596b54 and bRam10596b55 to determine an index (0, 1, or default 0xff). It then
 *   returns the corresponding value from a local array {0x19a000a, 0x19a000f}. If the index
 *   is 0xff, it returns 0. The specific meaning of the setting ID 0xb7 and the RAM bytes is
 *   not clear from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_value_by_mode_103dfd64(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x19a0014) {
    auStack_10[0] = 0x19a000a;
    auStack_10[1] = 0x19a000f;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xb7);
    iVar2 = 0xff;
    if (bRam10596b54 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10596b55 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
