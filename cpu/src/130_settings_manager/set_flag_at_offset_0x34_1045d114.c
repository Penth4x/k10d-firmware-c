/* @k10d set_flag_at_offset_0x34_1045d114 @ 0x1045d114
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_at_offset_0x34_1045d114(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x1);
  return 0;
}
