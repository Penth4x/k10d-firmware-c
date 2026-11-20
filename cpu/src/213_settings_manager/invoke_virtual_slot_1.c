/* @k10d invoke_virtual_slot_1 @ 0x104af0ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_1(int *param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  param_1[3] = param_3;
  iVar2 = *(int *)*param_1;
  uVar1 = (((vtbl_entry*)(iVar2))[1].fn)(*param_1 + (int)*(short *)(iVar2 + 8));
  return uVar1;
}
