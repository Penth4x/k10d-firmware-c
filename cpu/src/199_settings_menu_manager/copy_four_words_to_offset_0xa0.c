/* @k10d copy_four_words_to_offset_0xa0 @ 0x10494c12
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_to_offset_0xa0(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(uint8_t *)((int)param_1 + 0xa0) = 1;
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)((int)param_1 + iVar2 + 0xa0) = *(uint32_t *)(iVar1 + param_2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
