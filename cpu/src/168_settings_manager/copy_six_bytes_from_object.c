/* @k10d copy_six_bytes_from_object @ 0x1047cf92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_six_bytes_from_object(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x40) + 0xc);
  iVar2 = 6;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + iVar1) = *(uint8_t *)(iVar2 + param_1 + 0x44);
  } while (iVar2 != 0);
  *(uint32_t *)(param_1 + 0x2c) = 0;
  return;
}
