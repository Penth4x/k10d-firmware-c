/* @k10d get_low_three_bits @ 0x1044ba62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte get_low_three_bits(int param_1)

{
  byte bVar1;
  
  bVar1 = read_two_byte_value_1044ba3a((void *)param_1);
  return bVar1 & 7;
}
