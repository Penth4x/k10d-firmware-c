/* @k10d invoke_virtual_slot_13_10396b6a @ 0x10396b6a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int invoke_virtual_slot_13_10396b6a(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0xb] = (int)param_1;
  if (*param_2 == 8) {
    iVar1 = (**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1,0,0);
    param_1[0xb] = iVar1;
  }
  return param_1[0xb];
}
