/* @k10d set_flag_if_field_zero @ 0x10371496
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_field_zero(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    invoke_callback_at_8000439c();
    *(uint8_t *)(param_1 + 0x14) = 1;
  }
  return;
}
