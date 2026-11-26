/* @k10d set_flag_at_offset_0xcc @ 0x1039e3be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 042_debug_menu_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0xcc(cls_10564150 *param_1)

{
  set_flg_obj((void *)&param_1->field_0xcc, 0x80);
  return;
}
