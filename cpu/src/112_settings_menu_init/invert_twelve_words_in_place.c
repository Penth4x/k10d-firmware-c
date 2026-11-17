/* @k10d invert_twelve_words_in_place @ 0x1042f210
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invert_twelve_words_in_place(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 3;
  iVar1 = 0;
  do {
    *(uint *)(iVar1 + param_1) = *(uint *)(iVar1 + param_1) ^ 0xffffffff;
    *(uint *)(iVar1 + 4 + param_1) = *(uint *)(iVar1 + 4 + param_1) ^ 0xffffffff;
    iVar2 = iVar1 + 0xc;
    *(uint *)(iVar1 + 8 + param_1) = *(uint *)(iVar1 + 8 + param_1) ^ 0xffffffff;
    iVar1 = iVar1 + 0x10;
    *(uint *)(iVar2 + param_1) = *(uint *)(iVar2 + param_1) ^ 0xffffffff;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}
