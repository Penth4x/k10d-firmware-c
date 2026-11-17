/* @k10d get_setting_index_by_id_103eafde @ 0x103eafde
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a setting value read from the working copy to one of three fixed indices based on
 *   comparison with three stored bytes.
 * summary:
 *   The function checks if param_2 equals 0x1ad001b. If so, it reads setting 0xc5 from the
 *   object's working copy (at param_1+8) via setting_get. It then compares this value
 *   against three consecutive bytes in RAM (0x105978d0-0x105978d2) to determine an index
 *   (0, 1, or 2, defaulting to 0xff if no match). Finally, it returns the corresponding
 *   value from a local array {0x1ad000c, 0x1ad0010, 0x1ad0014}. The specific meaning of the
 *   setting ID 0xc5 and the RAM bytes is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_index_by_id_103eafde(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  uVar1 = 0;
  if (param_2 == 0x1ad001b) {
    auStack_14[0] = 0x1ad000c;
    auStack_14[1] = 0x1ad0010;
    auStack_14[2] = 0x1ad0014;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xc5);
    iVar2 = 0xff;
    if (bRam105978d0 == uVar3) {
      iVar2 = 0;
    }
    if (bRam105978d1 == uVar3) {
      iVar2 = 1;
    }
    if (bRam105978d2 == uVar3) {
      iVar2 = 2;
    }
    uVar1 = auStack_14[iVar2];
  }
  return uVar1;
}
