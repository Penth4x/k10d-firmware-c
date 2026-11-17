/* @k10d call_helper_on_state_five @ 0x103a6c3e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 046_menu_display_control (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on the object when a specific event ID and a state field equal 5.
 * summary:
 *   Checks if param_2 equals 0x2050014 and if the integer at offset 0x40 of param_1 is 5.
 *   If both conditions are true, it calls activate_object_state_once with param_1 as the
 *   argument. The function returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_state_five(void *param_1,int param_2)

{
  if ((param_2 == 0x2050014) && (*(int *)((int)param_1 + 0x40) == 5)) {
    activate_object_state_once(param_1);
  }
  return;
}
