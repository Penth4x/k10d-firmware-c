/* @k10d clear_flag_at_offset_0x28 @ 0x10466fe6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_at_offset_0x28(void *param_1)

{
  *(uint8_t *)((int)param_1 + 0x28) = 0;
  return;
}
