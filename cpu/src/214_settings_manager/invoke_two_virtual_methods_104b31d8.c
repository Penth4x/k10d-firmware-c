/* @k10d invoke_two_virtual_methods_104b31d8 @ 0x104b31d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_104b31d8(int *param_1)

{
  int iVar1;
  
  (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1);
  iVar1 = *(int *)param_1[1];
  (((vtbl_entry*)(iVar1))[12].fn)(param_1[1] + (int)((vtbl_entry*)(iVar1))[12].adj,param_1[4],param_1[5]);
  return;
}
