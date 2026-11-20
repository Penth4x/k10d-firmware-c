/* @k10d invoke_virtual_slot_two_1040dc6e @ 0x1040dc6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1040dc6e(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  (((vtbl_entry*)(iVar1))[2].fn)
            ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[2].adj,0x112006e,0);
  return;
}
