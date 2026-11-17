/* @k10d clear_flag_at_offset_0x4c_10488f62 @ 0x10488f62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_at_offset_0x4c_10488f62(void *param_1)

{
  *(uint8_t *)((int)param_1 + 0x4c) = 0;
  return;
}
