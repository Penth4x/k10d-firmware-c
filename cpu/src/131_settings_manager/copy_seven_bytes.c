/* @k10d copy_seven_bytes @ 0x1045d486
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_seven_bytes(cls_105a5d5c *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 6;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)((int)&param_1->field_0x0 + iVar2 + 3) = *(uint8_t *)(iVar1 + param_2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
