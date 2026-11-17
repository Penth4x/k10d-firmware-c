/* @k10d set_flag_on_nested_object_104b342e @ 0x104b342e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_on_nested_object_104b342e(int param_1)

{
  set_flg_obj(*(uint32_t **)(param_1 + 0x44));
  return;
}
