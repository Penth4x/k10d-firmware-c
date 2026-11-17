/* @k10d invoke_virtual_method_on_range_10494388 @ 0x10494388
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_range_10494388(int param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)0x10493db4/*ROM*/)();
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != *(int **)(param_1 + 0x1c)) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (**(code **)(iVar2 + 0xac))(*piVar1 + (int)*(short *)(iVar2 + 0xa8),param_2);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x1c));
  }
  return;
}
