/* @k10d deep_copy_struct_with_subblocks @ 0x1051ee82
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t * deep_copy_struct_with_subblocks(uint16_t *param_1,uint16_t *param_2)

{
  int iVar1;
  int iVar2;
  int iStack_10;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    iVar1 = 0;
    param_1[1] = param_2[1];
    iVar2 = 0;
    *(uint8_t *)(param_1 + 2) = *(uint8_t *)(param_2 + 2);
    iStack_10 = 1;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 5) = *(uint8_t *)((int)param_2 + iVar1 + 5);
      copy_large_struct((uint32_t *)((int)param_1 + iVar2 + 0xc),
                   (uint32_t *)((int)param_2 + iVar2 + 0xc));
      *(uint8_t *)((int)param_1 + iVar1 + 6) = *(uint8_t *)((int)param_2 + iVar1 + 6);
      copy_large_struct((uint32_t *)((int)param_1 + iVar2 + 0x1e8),
                   (uint32_t *)((int)param_2 + iVar2 + 0x1e8));
      *(uint8_t *)((int)param_1 + iVar1 + 7) = *(uint8_t *)((int)param_2 + iVar1 + 7);
      copy_large_struct((uint32_t *)((int)param_1 + iVar2 + 0x3c4),
                   (uint32_t *)((int)param_2 + iVar2 + 0x3c4));
      iVar1 = iVar1 + 3;
      iVar2 = iVar2 + 0x594;
      iStack_10 = iStack_10 + -1;
    } while (-1 < iStack_10);
  }
  return param_1;
}
