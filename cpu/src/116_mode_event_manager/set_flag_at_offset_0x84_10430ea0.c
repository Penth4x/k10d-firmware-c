/* @k10d set_flag_at_offset_0x84_10430ea0 @ 0x10430ea0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x84_10430ea0(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x84));
  return;
}
