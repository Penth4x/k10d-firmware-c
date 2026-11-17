/* @k10d check_flag_bit5_at_offset_0x20 @ 0x1043fe60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_flag_bit5_at_offset_0x20(int param_1)

{
  return (**(byte **)(param_1 + 0x20) & 0x20) != 0;
}
