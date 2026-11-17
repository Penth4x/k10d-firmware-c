/* @k10d set_flag_and_update_two_fields_103984ce @ 0x103984ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_update_two_fields_103984ce(void *param_1,int param_2)

{
  *(char *)((int)param_1 + 100) = (char)param_2;
  if (param_2 == 0) {
    invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x4c),0);
  }
  else {
    invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x4c),1);
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x50),(uint)(param_2 == 0));
  return;
}
