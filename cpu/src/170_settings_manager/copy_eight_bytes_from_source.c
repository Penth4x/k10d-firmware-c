/* @k10d copy_eight_bytes_from_source @ 0x1047f5d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_eight_bytes_from_source(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 8;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + iVar1 + 3) = *(uint8_t *)(iVar2 + param_2);
  } while (iVar2 != 0);
  return;
}
