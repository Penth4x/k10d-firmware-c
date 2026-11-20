/* @k10d invoke_virtual_slot_4_104af106 @ 0x104af106
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_4_104af106(int *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  param_1[3] = 0;
  iVar2 = *(int *)*param_1;
  uVar1 = (((vtbl_entry*)(iVar2))[4].fn)(*param_1 + (int)((vtbl_entry*)(iVar2))[4].adj);
  return uVar1;
}
