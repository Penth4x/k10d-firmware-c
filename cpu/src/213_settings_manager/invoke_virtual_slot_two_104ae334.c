/* @k10d invoke_virtual_slot_two_104ae334 @ 0x104ae334
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_104ae334(void *param_1)

{
  int iVar1;
  
  *(uint8_t *)((int)param_1 + 0x14) = 0;
  iVar1 = **(int **)((int)param_1 + 0x1c);
  (((vtbl_entry*)(iVar1))[2].fn)
            ((int)*(int **)((int)param_1 + 0x1c) + (int)((vtbl_entry*)(iVar1))[2].adj,2,0x3a,0);
  return;
}
