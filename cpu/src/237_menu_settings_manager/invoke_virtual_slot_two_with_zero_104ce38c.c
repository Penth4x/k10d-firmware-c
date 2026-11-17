/* @k10d invoke_virtual_slot_two_with_zero_104ce38c @ 0x104ce38c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_with_zero_104ce38c(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  return 1;
}
