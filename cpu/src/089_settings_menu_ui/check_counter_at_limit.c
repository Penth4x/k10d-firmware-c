/* @k10d check_counter_at_limit @ 0x103fdcf8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_counter_at_limit(int param_1,int param_2)

{
  return param_2 - *(int *)(param_1 + 8) == *(ushort *)(param_1 + 0xc) - 1;
}
