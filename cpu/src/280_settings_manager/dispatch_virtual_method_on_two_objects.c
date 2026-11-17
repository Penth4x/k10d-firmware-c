/* @k10d dispatch_virtual_method_on_two_objects @ 0x1052176a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_two_objects(uint32_t *param_1)

{
  int iVar1;
  
  if (param_1[9] == 0) {
    iVar1 = *(int *)param_1[0xb];
    (**(code **)(iVar1 + 0x1c))((int)param_1[0xb] + (int)*(short *)(iVar1 + 0x18));
  }
  else {
    (**(code **)(param_1[3] + 0xa4))((int)*(short *)(param_1[3] + 0xa0) + (int)param_1,*param_1);
    iVar1 = *(int *)param_1[0xb];
    (**(code **)(iVar1 + 0x1c))((int)param_1[0xb] + (int)*(short *)(iVar1 + 0x18));
  }
  return;
}
