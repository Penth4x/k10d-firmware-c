/* @k10d read_offset_0x14 @ 0x10436d96
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_offset_0x14(int param_1)

{
  return *(uint32_t *)(param_1 + 0x14);
}
