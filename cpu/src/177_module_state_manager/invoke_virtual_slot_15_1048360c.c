/* @k10d invoke_virtual_slot_15_1048360c @ 0x1048360c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_15_1048360c(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  (((vtbl_entry*)(iVar1))[7].fn)((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar1))[7].adj);
  return;
}
