/* @k10d set_flag_at_offset_0x12 @ 0x1046ffc2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x12(int param_1)

{
  *(uint8_t *)(param_1 + 0x12) = 1;
  return;
}
