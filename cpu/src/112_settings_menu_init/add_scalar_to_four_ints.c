/* @k10d add_scalar_to_four_ints @ 0x1042f2b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void add_scalar_to_four_ints(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 3;
  iVar1 = 0;
  do {
    *(int *)(iVar1 + param_1) = *(int *)(iVar1 + param_1) + param_2;
    *(int *)(iVar1 + 4 + param_1) = *(int *)(iVar1 + 4 + param_1) + param_2;
    iVar2 = iVar1 + 0xc;
    *(int *)(iVar1 + 8 + param_1) = *(int *)(iVar1 + 8 + param_1) + param_2;
    iVar1 = iVar1 + 0x10;
    *(int *)(iVar2 + param_1) = *(int *)(iVar2 + param_1) + param_2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}
