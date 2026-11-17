/* @k10d copy_words_with_offset @ 0x1046c714
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 152_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_words_with_offset(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_3) {
    param_4 = param_4 << 2;
    param_3 = param_3 + -3;
    iVar2 = 0;
    if (2 < param_3) {
      iVar1 = param_1 + 8;
      do {
        *(uint32_t *)(iVar1 + param_4) = *(uint32_t *)(param_2 + iVar2);
        *(uint32_t *)(iVar1 + param_4 + 4) = *(uint32_t *)(param_2 + iVar2 + 4);
        *(uint32_t *)(iVar1 + param_4 + 8) = *(uint32_t *)(param_2 + iVar2 + 8);
        iVar2 = iVar2 + 0xc;
        param_3 = param_3 + -3;
        param_4 = param_4 + 0xc;
      } while (-1 < param_3);
    }
    param_3 = param_3 + 2;
    if (-1 < param_3) {
      do {
        *(uint32_t *)(param_1 + 8 + param_4) = *(uint32_t *)(param_2 + iVar2);
        iVar2 = iVar2 + 4;
        param_3 = param_3 + -1;
        param_4 = param_4 + 4;
      } while (-1 < param_3);
    }
  }
  return;
}
