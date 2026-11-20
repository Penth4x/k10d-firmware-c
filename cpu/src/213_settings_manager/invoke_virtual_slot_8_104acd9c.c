/* @k10d invoke_virtual_slot_8_104acd9c @ 0x104acd9c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_104acd9c(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 0x10);
  (((vtbl_entry*)(iVar1))[8].fn)((int)*(int **)((int)param_1 + 0x10) + (int)((vtbl_entry*)(iVar1))[8].adj);
  return;
}
