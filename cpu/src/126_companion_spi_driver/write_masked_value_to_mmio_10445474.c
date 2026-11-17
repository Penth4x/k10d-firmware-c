/* @k10d write_masked_value_to_mmio_10445474 @ 0x10445474
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_mmio_10445474(uint32_t param_1,uint param_2)

{
  _DAT_4004030c = param_2 & 0x3ffffff8;
  return;
}
