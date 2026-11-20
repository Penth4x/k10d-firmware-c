/* @k10d call_virtual_slot_two_104a290e @ 0x104a290e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t call_virtual_slot_two_104a290e(int param_1)

{
  uint8_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0xc);
  uVar1 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0xc) + (int)((vtbl_entry*)(iVar2))[2].adj,0);
  return uVar1;
}
