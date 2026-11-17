/* @k10d toggle_flag_and_update_two_fields_10397cee @ 0x10397cee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_and_update_two_fields_10397cee(void *param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)((int)param_1 + 0x6e) == '\0';
  *(bool *)((int)param_1 + 0x6e) = bVar1;
  bVar1 = !bVar1;
  if (bVar1) {
    invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x4c),0);
  }
  else {
    invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x4c),1);
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x50),(uint)bVar1);
  return;
}
