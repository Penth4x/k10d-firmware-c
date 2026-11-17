/* @k10d call_vtable_slot_and_set_flag @ 0x1049569e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_vtable_slot_and_set_flag(uint32_t *param_1)

{
  (*(code *)0x1048f148/*ROM*/)(*param_1);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
