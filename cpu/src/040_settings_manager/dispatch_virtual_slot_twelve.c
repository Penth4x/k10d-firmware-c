/* @k10d dispatch_virtual_slot_twelve @ 0x1039275e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_twelve(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 100))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x60));
  return;
}
