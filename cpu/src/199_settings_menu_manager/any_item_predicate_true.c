/* @k10d any_item_predicate_true @ 0x1049454a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char any_item_predicate_true(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(param_1 + 9);
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != *(int **)(param_1 + 0x1c)) {
    do {
      iVar3 = *(int *)(*piVar1 + 0xc);
      iVar3 = (**(code **)(iVar3 + 0x4c))(*piVar1 + (int)*(short *)(iVar3 + 0x48));
      cVar2 = iVar3 != 0 || cVar2 != '\0';
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x1c));
  }
  return cVar2;
}
