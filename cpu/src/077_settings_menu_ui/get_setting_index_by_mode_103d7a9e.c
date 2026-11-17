/* @k10d get_setting_index_by_mode_103d7a9e @ 0x103d7a9e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a small index (0, 1, or 2) derived from a camera setting value compared against
 *   two RAM constants.
 * summary:
 *   The function is a virtual method (slot 8) that checks if param_2 equals 0x1980014. If
 *   so, it reads setting 0xb2 via setting_get and compares the result to two global bytes
 *   (bRam105964c0 and bRam105964c1). It returns 0x198000a if the first matches, 0x198000f
 *   if the second matches, and 0xff otherwise. The specific camera subsystem role is not
 *   determinable from the provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_index_by_mode_103d7a9e(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1980014) {
    auStack_10[0] = 0x198000a;
    auStack_10[1] = 0x198000f;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xb2);
    iVar2 = 0xff;
    if (bRam105964c0 == uVar3) {
      iVar2 = 0;
    }
    if (bRam105964c1 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
