/* @k10d get_setting_sub_id_by_index @ 0x103e5206
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Maps a setting value (0xc4) to one of five fixed sub-IDs based on which of five RAM
 *   bytes matches it.
 * summary:
 *   Only active when param_2 equals 0x1ac0025. It reads setting 0xc4 via setting_get and
 *   compares the result against five consecutive RAM bytes (0x1059704c-0x10597050). The
 *   first matching byte index (0-4) selects the corresponding value from a local array of
 *   five constants (0x1ac000c, 0x1ac0010, 0x1ac0014, 0x1ac0018, 0x1ac001c), which is
 *   returned. If no byte matches, it returns 0. The function is virtual slot 8 of
 *   cls_10597054.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_sub_id_by_index(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_1c [5];
  
  uVar1 = 0;
  if (param_2 == 0x1ac0025) {
    auStack_1c[0] = 0x1ac000c;
    auStack_1c[1] = 0x1ac0010;
    auStack_1c[2] = 0x1ac0014;
    auStack_1c[3] = 0x1ac0018;
    auStack_1c[4] = 0x1ac001c;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xc4);
    iVar2 = 0xff;
    if (bRam1059704c == uVar3) {
      iVar2 = 0;
    }
    if (bRam1059704d == uVar3) {
      iVar2 = 1;
    }
    if (bRam1059704e == uVar3) {
      iVar2 = 2;
    }
    if (bRam1059704f == uVar3) {
      iVar2 = 3;
    }
    if (bRam10597050 == uVar3) {
      iVar2 = 4;
    }
    uVar1 = auStack_1c[iVar2];
  }
  return uVar1;
}
