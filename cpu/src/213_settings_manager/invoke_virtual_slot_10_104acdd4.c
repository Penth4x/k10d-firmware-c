/* @k10d invoke_virtual_slot_10_104acdd4 @ 0x104acdd4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_10_104acdd4(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x10);
  (((vtbl_entry*)(iVar1))[10].fn)((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar1))[10].adj);
  return;
}
