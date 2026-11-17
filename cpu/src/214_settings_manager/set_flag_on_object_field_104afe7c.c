/* @k10d set_flag_on_object_field_104afe7c @ 0x104afe7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_on_object_field_104afe7c(int param_1)

{
  set_flg_obj(*(uint32_t **)(param_1 + 0x34));
  return;
}
