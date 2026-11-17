/* @k10d copy_four_words_from_source_1045bfe8 @ 0x1045bfe8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_from_source_1045bfe8(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + (int)param_1) = *(uint32_t *)((int)param_2 + iVar2 + 4);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
