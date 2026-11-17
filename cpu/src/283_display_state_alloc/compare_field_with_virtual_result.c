/* @k10d compare_field_with_virtual_result @ 0x10527a3c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 283_display_state_alloc (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool compare_field_with_virtual_result(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x208) + 0x1c))
                    (*(short *)(*(int *)(param_1 + 0x208) + 0x18) + param_1);
  return iVar2 == iVar1;
}
