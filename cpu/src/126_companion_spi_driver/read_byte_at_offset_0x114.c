/* @k10d read_byte_at_offset_0x114 @ 0x1043d8aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_0x114(int param_1)

{
  return **(uint8_t **)(param_1 + 0x114);
}
