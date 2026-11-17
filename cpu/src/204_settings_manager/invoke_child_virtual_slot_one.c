/* @k10d invoke_child_virtual_slot_one @ 0x1049b48a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_child_virtual_slot_one(int param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    forward_two_args_to_helper_1049a1c4((int *)(param_1 + 4),param_2[1]);
    (**(code **)(*param_2 + 0xc))((int)*(short *)(*param_2 + 8) + (int)param_2,3);
  }
  return;
}
