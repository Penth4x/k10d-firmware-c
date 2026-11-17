/* @k10d write_two_bytes_to_mmio_104455e4 @ 0x104455e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_bytes_to_mmio_104455e4(uint32_t param_1,uint16_t param_2)

{
  _DAT_40040390 = param_2;
  return;
}
