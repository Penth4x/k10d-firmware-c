/* @k10d dispatch_virtual_slot_14 @ 0x1047d3d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_14(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int *piVar1;
  
  piVar1 = (int *)dispatch_on_state_check(param_1,param_3);
  (**(code **)(*piVar1 + 0x74))
            ((int)piVar1 + (int)*(short *)(*piVar1 + 0x70),param_2,param_3,param_4);
  return;
}
