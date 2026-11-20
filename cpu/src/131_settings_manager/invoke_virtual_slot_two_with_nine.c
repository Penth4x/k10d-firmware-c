/* @k10d invoke_virtual_slot_two_with_nine @ 0x1045d684
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_with_nine(int *param_1)

{
  (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,9);
  return;
}
