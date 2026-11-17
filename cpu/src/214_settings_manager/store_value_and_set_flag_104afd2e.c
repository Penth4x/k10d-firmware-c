/* @k10d store_value_and_set_flag_104afd2e @ 0x104afd2e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_set_flag_104afd2e(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x24) = param_2;
  set_flg_obj(*(uint32_t **)(param_1 + 0x34));
  return;
}
