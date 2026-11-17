/* @k10d get_setting_toggle_value @ 0x103d7488
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Maps a binary setting value to a specific ID based on the setting ID and current state.
 * summary:
 *   The function takes a setting ID (param_2) and an object pointer (param_1). It reads the
 *   current value of the setting using setting_get. Depending on whether the setting ID is
 *   0x186000d or 0x1860013, it compares the retrieved value against two global RAM
 *   variables (bRam1059642c/d or bRam1059642e/f) to determine a state index (0 or 1). It
 *   then returns one of two hardcoded IDs (0x1860010/0x186000f or 0x1860016/0x1860015)
 *   corresponding to that state. If the setting ID is not recognized, it returns the input
 *   ID.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_toggle_value(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_18 [4];
  
  uVar1 = 0x186000d;
  if (param_2 == 0x186000d) {
    auStack_18[0] = 0x1860010;
    auStack_18[1] = 0x186000f;
    uVar3 = setting_get(*(int *)(param_1 + 8),0x76);
    iVar2 = 0xff;
    if (bRam1059642c == uVar3) {
      iVar2 = 0;
    }
    if (bRam1059642d == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_18[iVar2];
  }
  else if (param_2 == 0x1860013) {
    auStack_18[2] = 0x1860016;
    auStack_18[3] = 0x1860015;
    uVar3 = setting_get(*(int *)(param_1 + 8),0x77);
    iVar2 = 0xff;
    if (bRam1059642e == uVar3) {
      iVar2 = 0;
    }
    if (bRam1059642f == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_18[iVar2 + 2];
  }
  return uVar1;
}
