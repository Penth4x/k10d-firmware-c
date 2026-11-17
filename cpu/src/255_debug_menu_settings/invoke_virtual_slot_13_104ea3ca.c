/* @k10d invoke_virtual_slot_13_104ea3ca @ 0x104ea3ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_13_104ea3ca(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14);
  (**(code **)(iVar1 + 0x6c))((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x68));
  return;
}
