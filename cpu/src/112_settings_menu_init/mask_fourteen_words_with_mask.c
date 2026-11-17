/* @k10d mask_fourteen_words_with_mask @ 0x1042f248
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void mask_fourteen_words_with_mask(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 3;
  iVar1 = 0;
  do {
    *(uint *)(iVar1 + param_1) = *(uint *)(iVar1 + param_1) & param_2;
    *(uint *)(iVar1 + 4 + param_1) = *(uint *)(iVar1 + 4 + param_1) & param_2;
    iVar2 = iVar1 + 0xc;
    *(uint *)(iVar1 + 8 + param_1) = *(uint *)(iVar1 + 8 + param_1) & param_2;
    iVar1 = iVar1 + 0x10;
    *(uint *)(iVar2 + param_1) = *(uint *)(iVar2 + param_1) & param_2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}
