/* @k10d store_object_and_call_virtual_slot @ 0x104af3c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_object_and_call_virtual_slot(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = (((vtbl_entry*)(*(int *)(param_2 + 4)))[13].fn)
                    (((vtbl_entry*)(*(int *)(param_2 + 4)))[13].adj + param_2);
  param_1[2] = iVar1;
  param_1[4] = 3;
  return;
}
