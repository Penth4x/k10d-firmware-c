/* @k10d copy_bytes_to_offset_0x98 @ 0x10428964
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_to_offset_0x98(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < param_3) {
    param_3 = param_3 + -3;
    if (2 < param_3) {
      do {
        iVar3 = param_1 + 0x98;
        *(uint8_t *)(iVar1 + iVar3) = *(uint8_t *)(iVar1 + param_2);
        iVar2 = iVar1 + 2;
        *(uint8_t *)(iVar1 + 1 + iVar3) = *(uint8_t *)(iVar1 + 1 + param_2);
        iVar1 = iVar1 + 3;
        param_3 = param_3 + -3;
        *(uint8_t *)(iVar2 + iVar3) = *(uint8_t *)(iVar2 + param_2);
      } while (-1 < param_3);
    }
    for (param_3 = param_3 + 2; -1 < param_3; param_3 = param_3 + -1) {
      *(uint8_t *)(iVar1 + param_1 + 0x98) = *(uint8_t *)(iVar1 + param_2);
      iVar1 = iVar1 + 1;
    }
  }
  return;
}
