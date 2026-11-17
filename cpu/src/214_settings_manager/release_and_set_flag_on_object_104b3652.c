/* @k10d release_and_set_flag_on_object_104b3652 @ 0x104b3652
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_and_set_flag_on_object_104b3652(int param_1)

{
  call_once_if_flag_zero(*(uint32_t *)(param_1 + 0x30), __frv_reg_unset(5), __frv_reg_unset(6));
  set_flg_obj(*(uint32_t **)(param_1 + 0x44));
  return;
}
