/* @k10d test_bit_6_of_byte @ 0x1044b8e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit_6_of_byte(byte *param_1)

{
  return ((int)(uint)*param_1 >> 6 & 1U) != 0;
}
