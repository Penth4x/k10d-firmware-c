/* @k10d set_byte_at_offset_0x29 @ 0x10466ff4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_0x29(void *param_1,uint8_t param_2)

{
  *(uint8_t *)((int)param_1 + 0x29) = param_2;
  return;
}
