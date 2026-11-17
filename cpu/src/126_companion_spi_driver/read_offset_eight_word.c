/* @k10d read_offset_eight_word @ 0x1043566e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_offset_eight_word(int param_1)

{
  return *(uint16_t *)(param_1 + 8);
}
