/* @k10d invoke_virtual_slot_seven_104b3cee @ 0x104b3cee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_seven_104b3cee(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x3c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x38));
  return;
}
