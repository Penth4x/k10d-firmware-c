/* @k10d invoke_virtual_on_range_items_10493858 @ 0x10493858
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_on_range_items_10493858(int param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  invoke_virtual_method_on_range_10494388(__frv_reg_unset(4), __frv_reg_unset(5));
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (**(code **)(iVar2 + 0xac))(*piVar1 + (int)*(short *)(iVar2 + 0xa8),param_2);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x4c));
  }
  return;
}
