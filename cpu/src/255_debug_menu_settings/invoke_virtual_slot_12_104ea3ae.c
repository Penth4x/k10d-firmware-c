/* @k10d invoke_virtual_slot_12_104ea3ae @ 0x104ea3ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_104ea3ae(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 0x14);
  (**(code **)(iVar1 + 100))((int)*(int **)((int)param_1 + 0x14) + (int)*(short *)(iVar1 + 0x60));
  return;
}
