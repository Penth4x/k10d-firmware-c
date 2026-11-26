/* @k10d set_flag_at_offset_eight_10427c02 @ 0x10427c02
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_eight_10427c02(void *param_1)

{
  set_flg_obj((uint32_t *)((int)param_1 + 8), 0x4);
  return;
}
