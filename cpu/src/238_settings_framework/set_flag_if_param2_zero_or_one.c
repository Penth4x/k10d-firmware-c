/* @k10d set_flag_if_param2_zero_or_one @ 0x104ceafe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 238_settings_framework (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_if_param2_zero_or_one(int param_1, int *param_2, uint32_t param_x2)

{
  if ((*param_2 == 0) || (*param_2 == 1)) {
    set_flg_obj((uint32_t *)(param_1 + 0x24), 0x80000000);
  }
  return 0;
}
