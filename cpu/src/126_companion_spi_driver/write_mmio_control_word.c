/* @k10d write_mmio_control_word @ 0x1044edca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_mmio_control_word(uint32_t param_1,short param_2,ushort param_3)

{
  _DAT_40100d00 = _DAT_40100d00 & 0x8000 | param_2 << 4 | param_3;
  return;
}
