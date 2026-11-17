/* @k10d invoke_virtual_slots_on_object_104a335a @ 0x104a335a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int invoke_virtual_slots_on_object_104a335a(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1,0);
    if ((iVar1 == 0) ||
       (iVar1 = (**(code **)(*param_1 + 0x1c))((int)*(short *)(*param_1 + 0x18) + (int)param_1,0),
       iVar1 == 0)) {
      return 0;
    }
    (**(code **)(*param_1 + 0x2c))((int)*(short *)(*param_1 + 0x28) + (int)param_1);
  }
  return param_1[1];
}
