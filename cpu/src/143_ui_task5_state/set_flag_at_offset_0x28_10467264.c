/* @k10d set_flag_at_offset_0x28_10467264 @ 0x10467264
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x28_10467264(int param_1, uint32_t param_x1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x28), 0x1);
  return;
}
