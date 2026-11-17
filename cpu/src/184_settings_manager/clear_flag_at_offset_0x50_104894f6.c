/* @k10d clear_flag_at_offset_0x50_104894f6 @ 0x104894f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_at_offset_0x50_104894f6(void *param_1)

{
  *(uint8_t *)((int)param_1 + 0x50) = 0;
  return;
}
