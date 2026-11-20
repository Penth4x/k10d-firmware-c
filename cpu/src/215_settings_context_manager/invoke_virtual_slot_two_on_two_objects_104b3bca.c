/* @k10d invoke_virtual_slot_two_on_two_objects_104b3bca @ 0x104b3bca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_two_objects_104b3bca(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  (((vtbl_entry*)(iVar1))[2].fn)((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[2].adj);
  iVar1 = **(int **)(param_1 + 0x30);
  (((vtbl_entry*)(iVar1))[2].fn)((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[2].adj);
  return;
}
