/* @k10d invoke_virtual_slot_14_if_param_2_is_26 @ 0x103a9a1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_14_if_param_2_is_26(int *param_1,int param_2)

{
  if (param_2 == 0x1a) {
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
  }
  return;
}
