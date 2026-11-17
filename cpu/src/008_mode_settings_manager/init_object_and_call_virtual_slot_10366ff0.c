/* @k10d init_object_and_call_virtual_slot_10366ff0 @ 0x10366ff0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_call_virtual_slot_10366ff0(int *param_1)

{
  param_1[7] = 0;
  param_1[0x13] = 1;
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  init_object_with_offset_field_10366c8a(param_1);
  return;
}
