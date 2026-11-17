/* @k10d copy_bytes_aligned @ 0x104ac9d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint copy_bytes_aligned(uint8_t *param_1,uint8_t *param_2,uint param_3,uint param_4)

{
  uint8_t uVar1;
  int iVar2;
  
  if ((param_4 != 0) && (param_4 < param_3)) {
    param_3 = param_4;
  }
  if (param_3 != 0) {
    iVar2 = param_3 - 3;
    if (2 < iVar2) {
      do {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        param_1 = param_1 + 3;
        iVar2 = iVar2 + -3;
        param_2 = param_2 + 3;
      } while (-1 < iVar2);
    }
    for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  return param_3;
}
