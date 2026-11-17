/* @k10d clear_lens_fw_update_info @ 0x105428ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_lens_fw_update_info(int param_1)

{
  uint32_t *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x6c);
  puVar1 = (uint32_t *)puVar3[2];
  for (uVar2 = 0; uVar2 < *puVar3; uVar2 = uVar2 + 1) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 3;
  }
  puVar3[3] = *puVar3;
  puVar3[4] = 0xffffffff;
  return;
}
