/* @k10d invoke_virtual_slot_three_104acd2c @ 0x104acd2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_three_104acd2c(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x10);
  (((vtbl_entry*)(iVar1))[4].fn)((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar1))[4].adj);
  return;
}
