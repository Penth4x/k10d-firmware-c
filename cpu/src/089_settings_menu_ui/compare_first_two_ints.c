/* @k10d compare_first_two_ints @ 0x103fdce8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool compare_first_two_ints(int *param_1)

{
  return *param_1 == param_1[1];
}
