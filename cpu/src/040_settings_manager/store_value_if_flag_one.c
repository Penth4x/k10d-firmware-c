/* @k10d store_value_if_flag_one @ 0x10392fc2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_if_flag_one(int param_1,int *param_2)

{
  if (*param_2 == 1) {
    *(int *)(param_1 + 0xf4) = param_2[1];
    dispatch_on_four_state_ids(__frv_reg_unset(4));
  }
  return;
}
