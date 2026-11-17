/* @k10d test_bit7_of_offset_0x1c @ 0x1043fd78
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit7_of_offset_0x1c(int param_1)

{
  return (**(byte **)(param_1 + 0x1c) & 0x80) != 0;
}
