/* @k10d copy_words_to_struct_offset_10428474 @ 0x10428474
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_words_to_struct_offset_10428474(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_4) {
    param_2 = param_2 << 3;
    param_4 = param_4 + -3;
    iVar1 = 0;
    if (2 < param_4) {
      do {
        iVar2 = param_1 + 0x38;
        *(uint16_t *)(iVar2 + param_2) = *(uint16_t *)(param_3 + iVar1);
        *(uint16_t *)(iVar2 + param_2 + 2) = *(uint16_t *)(param_3 + iVar1 + 2);
        *(uint16_t *)(iVar2 + param_2 + 4) = *(uint16_t *)(param_3 + iVar1 + 4);
        iVar1 = iVar1 + 6;
        param_4 = param_4 + -3;
        param_2 = param_2 + 6;
      } while (-1 < param_4);
    }
    for (param_4 = param_4 + 2; -1 < param_4; param_4 = param_4 + -1) {
      *(uint16_t *)(param_1 + 0x38 + param_2) = *(uint16_t *)(param_3 + iVar1);
      iVar1 = iVar1 + 2;
      param_2 = param_2 + 2;
    }
  }
  return;
}
