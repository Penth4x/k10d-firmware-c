/* @k10d update_object_state_and_call_virtual @ 0x10481d3e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_object_state_and_call_virtual(int param_1,int param_2)

{
  int *piVar1;
  uint32_t uVar2;
  
  *(uint32_t *)(param_1 + 0x1c) = 3;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_2;
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0x50000);
  }
  return uVar2;
}
