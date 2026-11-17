/* @k10d store_value_and_set_flag_104b367a @ 0x104b367a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_set_flag_104b367a(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x40) = param_2;
  set_flg_obj(*(uint32_t **)(param_1 + 0x44));
  return;
}
