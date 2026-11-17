/* @k10d invoke_virtual_slot_two_103ac16a @ 0x103ac16a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_103ac16a(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar1 + 0x14))
            ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x10),0x1120076,0);
  return;
}
