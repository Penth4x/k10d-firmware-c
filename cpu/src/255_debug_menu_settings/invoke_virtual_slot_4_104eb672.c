/* @k10d invoke_virtual_slot_4_104eb672 @ 0x104eb672
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_104eb672(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x90);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(param_1 + 0x90) + (int)*(short *)(iVar1 + 0x20));
  return;
}
