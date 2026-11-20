/* @k10d loop_copy_four_chunks @ 0x104ad9ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint loop_copy_four_chunks(uint32_t param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  do {
    iVar1 = copy_bytes_aligned((char *)param_2 + uVar2,
                         (char *)(*(uint32_t *)(uVar3 * 4 + -0x7ffef9a0)),
                         param_3 - uVar2,*(uint8_t *)(uVar3 + 0x105b75e8/*ROM*/));
    uVar2 = iVar1 + uVar2;
    if (param_3 <= uVar2) {
      return uVar2;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 4);
  return uVar2;
}
