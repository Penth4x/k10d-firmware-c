/* @k10d write_byte_to_4004001b @ 0x104462b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_4004001b(uint32_t param_1,uint8_t param_2)

{
  DAT_4004001b = param_2;
  return;
}
