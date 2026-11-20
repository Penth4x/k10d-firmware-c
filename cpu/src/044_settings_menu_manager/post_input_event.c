/* @k10d post_input_event @ 0x1039fcda
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void post_input_event(cls_105992d4 *param_1,uint32_t param_2)

{
  ui_post_input((cls_105b4254 *)&param_1->field_0x8,param_2);
  return;
}
