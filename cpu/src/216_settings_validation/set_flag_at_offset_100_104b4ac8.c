/* @k10d set_flag_at_offset_100_104b4ac8 @ 0x104b4ac8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 216_settings_validation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b8354": ignoring overlapping field "field_0x8" */

void set_flag_at_offset_100_104b4ac8(cls_105b8354 *param_1)

{
  set_flg_obj((uint32_t *)&param_1->field_0x64, 0x1);
  return;
}
