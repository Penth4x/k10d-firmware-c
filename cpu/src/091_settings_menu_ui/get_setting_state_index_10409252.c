/* @k10d get_setting_state_index_10409252 @ 0x10409252
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a state index (0x1ba000b, 0x1ba000d, or 0x1ba000e) based on a setting value
 *   read via setting_get.
 * summary:
 *   The function checks if param_2 equals 0x1ba000b; if so, it reads setting 0x72 from the
 *   object's field at offset 8 using setting_get. It compares the result against two RAM
 *   bytes (bRam105999e8 and bRam105999e9) to determine an index (0, 1, or default 0xff). It
 *   then returns the corresponding value from a local array {0x1ba000e, 0x1ba000d} or the
 *   default 0x1ba000b. The specific meaning of the setting ID 0x72 and the RAM bytes is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_state_index_10409252(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0x1ba000b;
  if (param_2 == 0x1ba000b) {
    auStack_10[0] = 0x1ba000e;
    auStack_10[1] = 0x1ba000d;
    uVar3 = setting_get(*(int *)(param_1 + 8),0x72);
    iVar2 = 0xff;
    if (bRam105999e8 == uVar3) {
      iVar2 = 0;
    }
    if (bRam105999e9 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
