/* @k10d copy_eight_bytes_1045bf68 @ 0x1045bf68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_eight_bytes_1045bf68(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -4;
    *(uint32_t *)(iVar1 + (int)param_1) = *(uint32_t *)(iVar1 + (int)param_2);
  } while (iVar1 != 0);
  return;
}
