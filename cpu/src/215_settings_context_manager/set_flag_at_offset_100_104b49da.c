/* @k10d set_flag_at_offset_100_104b49da @ 0x104b49da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b8354": ignoring overlapping field "field_0x8" */

void set_flag_at_offset_100_104b49da(cls_105b8354 *param_1)

{
  set_flg_obj((uint32_t *)&param_1->field_0x64);
  return;
}
