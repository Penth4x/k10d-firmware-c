/* @k10d set_flag_at_offset_0x34_10461c12 @ 0x10461c12
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_at_offset_0x34_10461c12(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return 0;
}
