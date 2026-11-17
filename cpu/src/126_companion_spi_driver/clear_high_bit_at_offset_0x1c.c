/* @k10d clear_high_bit_at_offset_0x1c @ 0x1043fd66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_high_bit_at_offset_0x1c(int param_1)

{
  **(byte **)(param_1 + 0x1c) = **(byte **)(param_1 + 0x1c) & 0x7f;
  return;
}
