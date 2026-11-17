/* @k10d set_flag_and_update_two_fields_1039bdf8 @ 0x1039bdf8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_update_two_fields_1039bdf8(void *param_1,int param_2)

{
  *(char *)((int)param_1 + 0x66) = (char)param_2;
  if (param_2 == 0) {
    invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x48),0);
  }
  else {
    invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x48),1);
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x4c),(uint)(param_2 == 0));
  return;
}
