/* @k10d set_flag_at_offset_0x11 @ 0x1046fe2a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x11(int param_1)

{
  *(uint8_t *)(param_1 + 0x11) = 1;
  return;
}
