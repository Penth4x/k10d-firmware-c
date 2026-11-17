/* @k10d call_helper_and_set_flag_10494b88 @ 0x10494b88
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_set_flag_10494b88(uint32_t *param_1)

{
  uint32_t r5_in;
  
  store_value_at_offset_0x24_1048d938(*param_1,r5_in);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
