/* @k10d clear_bit_2_of_flag_at_offset_0x24 @ 0x10440f9e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_2_of_flag_at_offset_0x24(int param_1)

{
  **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xfb;
  return;
}
