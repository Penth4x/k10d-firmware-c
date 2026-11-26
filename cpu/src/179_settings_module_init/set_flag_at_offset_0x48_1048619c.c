/* @k10d set_flag_at_offset_0x48_1048619c @ 0x1048619c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 179_settings_module_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b2b70": ignoring overlapping field "field_0x8" */

void set_flag_at_offset_0x48_1048619c(cls_105b2b70 *param_1)

{
  set_flg_obj((void *)&param_1->field_0x48, 0x1);
  return;
}
