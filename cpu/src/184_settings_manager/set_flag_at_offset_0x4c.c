/* @k10d set_flag_at_offset_0x4c @ 0x104888c4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x4c(int param_1)

{
  *(uint8_t *)(param_1 + 0x4c) = 1;
  return;
}
