/* @k10d invoke_virtual_slot_9_104b2a60 @ 0x104b2a60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_slot_9_104b2a60(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x4c))((int)*(short *)(*piVar1 + 0x48) + (int)piVar1);
  }
  return piVar1 != (int *)0x0;
}
