/* @k10d write_two_bytes_to_mmio_10445670 @ 0x10445670
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_bytes_to_mmio_10445670(uint32_t param_1,uint16_t param_2)

{
  _DAT_400403ac = param_2;
  return;
}
