/* @k10d iterate_and_invoke_virtual_method @ 0x104a87fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_invoke_virtual_method(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != *(int **)(param_1 + 8)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))
                  (*(short *)(*(int *)(iVar1 + 0x10) + 8) + iVar1,3);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 8));
  }
  return;
}
