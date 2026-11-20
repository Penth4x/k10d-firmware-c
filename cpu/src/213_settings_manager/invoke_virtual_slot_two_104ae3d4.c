/* @k10d invoke_virtual_slot_two_104ae3d4 @ 0x104ae3d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_104ae3d4(int param_1)

{
  int iVar1;
  
  *(uint8_t *)(param_1 + 0x14) = 0;
  iVar1 = **(int **)(param_1 + 0x1c);
  (((vtbl_entry*)(iVar1))[2].fn)
            ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar1))[2].adj,7,0x27,0);
  return;
}
