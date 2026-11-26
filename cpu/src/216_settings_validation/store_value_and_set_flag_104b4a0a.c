/* @k10d store_value_and_set_flag_104b4a0a @ 0x104b4a0a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 216_settings_validation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b8354": ignoring overlapping field "field_0x8" */

uint32_t store_value_and_set_flag_104b4a0a(cls_105b8354 *param_1,uint32_t param_2)

{
  param_1->field_0x54 = param_2;
  set_flg_obj((uint32_t *)&param_1->field_0x64, 0x4);
  return 1;
}
