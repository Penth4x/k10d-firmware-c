/* @k10d invoke_virtual_slot_14_if_flags_clear @ 0x103a4ab8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_14_if_flags_clear(int *param_1,int param_2)

{
  if (((*(char *)((int)param_1 + 0x65) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) &&
     (param_2 == 0x1a)) {
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
  }
  return;
}
