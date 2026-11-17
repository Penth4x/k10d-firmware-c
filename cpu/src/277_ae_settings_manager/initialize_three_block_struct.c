/* @k10d initialize_three_block_struct @ 0x1051ece2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_three_block_struct(uint16_t *param_1)

{
  int iVar1;
  int iVar2;
  int iStack_c;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(uint8_t *)(param_1 + 2) = 0;
  iVar1 = 0;
  iStack_c = 1;
  iVar2 = 0;
  do {
    *(uint8_t *)((int)param_1 + iVar1 + 5) = 0;
    initialize_large_struct((void *)((int)param_1 + iVar2 + 0xc));
    *(uint8_t *)((int)param_1 + iVar1 + 6) = 0;
    initialize_large_struct((void *)((int)param_1 + iVar2 + 0x1e8));
    *(uint8_t *)((int)param_1 + iVar1 + 7) = 0;
    initialize_large_struct((void *)((int)param_1 + iVar2 + 0x3c4));
    iVar1 = iVar1 + 3;
    iVar2 = iVar2 + 0x594;
    iStack_c = iStack_c + -1;
  } while (-1 < iStack_c);
  return;
}
