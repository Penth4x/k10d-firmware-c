/* @k10d check_flag_bit7_at_offset_0x20 @ 0x1043fe3c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_flag_bit7_at_offset_0x20(int param_1)

{
  return (**(byte **)(param_1 + 0x20) & 0x80) != 0;
}
