/* @k10d read_low_nibble_at_offset_5 @ 0x1044bb68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte read_low_nibble_at_offset_5(void *param_1)

{
  return *(byte *)((int)param_1 + 5) & 0xf;
}
