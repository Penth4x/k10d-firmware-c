/* @k10d read_dat_40040328_masked @ 0x104458e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint read_dat_40040328_masked(void)

{
  return _DAT_40040328 & 0xffffff0;
}
