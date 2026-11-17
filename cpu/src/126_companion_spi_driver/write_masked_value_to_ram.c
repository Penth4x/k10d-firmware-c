/* @k10d write_masked_value_to_ram @ 0x10445780
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_value_to_ram(uint32_t param_1,ushort param_2)

{
  uRam400403da = param_2 & 0x3f3f;
  return;
}
