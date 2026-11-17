/* @k10d invoke_virtual_slot_on_nested_object_104cf21e @ 0x104cf21e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 240_menu_event_system (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_nested_object_104cf21e(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x38);
  (**(code **)(iVar1 + 0x4c))((int)*(int **)(param_1 + 0x38) + (int)*(short *)(iVar1 + 0x48));
  return;
}
