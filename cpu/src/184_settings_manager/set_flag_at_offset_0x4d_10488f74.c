/* @k10d set_flag_at_offset_0x4d_10488f74 @ 0x10488f74
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x4d_10488f74(int param_1)

{
  *(uint8_t *)(param_1 + 0x4d) = 1;
  return;
}
