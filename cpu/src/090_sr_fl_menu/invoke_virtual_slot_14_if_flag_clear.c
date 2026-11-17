/* @k10d invoke_virtual_slot_14_if_flag_clear @ 0x104075b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_14_if_flag_clear(int *param_1,int param_2)

{
  if ((*(char *)((int)param_1 + 0xbd) == '\0') && (param_2 == 0x1a)) {
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
  }
  return;
}
