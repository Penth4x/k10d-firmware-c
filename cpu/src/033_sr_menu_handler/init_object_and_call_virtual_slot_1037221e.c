/* @k10d init_object_and_call_virtual_slot_1037221e @ 0x1037221e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_call_virtual_slot_1037221e(int *param_1)

{
  param_1[6] = 2;
  param_1[0x15] = 0;
  param_1[0x13] = 3;
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  init_object_with_offset_0x20(param_1);
  return;
}
