/* @k10d set_bits_in_dat_40128120 @ 0x1044e03a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bits_in_dat_40128120(uint32_t param_1,ushort param_2)

{
  _DAT_40128120 = _DAT_40128120 & 0x370 | param_2;
  return;
}
