/* @k10d copy_three_bytes @ 0x1047f5c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_three_bytes(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 3;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + iVar1) = *(uint8_t *)(iVar2 + param_2);
  } while (iVar2 != 0);
  return;
}
