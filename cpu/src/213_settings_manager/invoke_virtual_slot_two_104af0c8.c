/* @k10d invoke_virtual_slot_two_104af0c8 @ 0x104af0c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_104af0c8(int *param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  param_1[3] = param_3;
  iVar2 = *(int *)*param_1;
  uVar1 = (((vtbl_entry*)(iVar2))[2].fn)(*param_1 + (int)((vtbl_entry*)(iVar2))[2].adj);
  return uVar1;
}
