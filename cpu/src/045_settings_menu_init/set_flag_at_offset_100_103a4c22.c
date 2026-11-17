/* @k10d set_flag_at_offset_100_103a4c22 @ 0x103a4c22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_100_103a4c22(int param_1)

{
  *(uint8_t *)(param_1 + 100) = 1;
  return;
}
