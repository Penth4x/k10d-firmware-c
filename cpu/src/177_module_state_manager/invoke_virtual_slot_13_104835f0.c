/* @k10d invoke_virtual_slot_13_104835f0 @ 0x104835f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_13_104835f0(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  (((vtbl_entry*)(iVar1))[6].fn)((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar1))[6].adj);
  return;
}
