/* @k10d set_flag_at_offset_100_104b4ac8 @ 0x104b4ac8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 216_settings_validation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_100_104b4ac8(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 100));
  return;
}
