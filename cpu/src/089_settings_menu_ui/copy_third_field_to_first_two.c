/* @k10d copy_third_field_to_first_two @ 0x103fdcb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_third_field_to_first_two(uint32_t *param_1)

{
  *param_1 = param_1[2];
  param_1[1] = param_1[2];
  return;
}
