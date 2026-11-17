/* @k10d compute_value_from_high_nibble @ 0x1044ba50
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_value_from_high_nibble(int param_1)

{
  byte bVar1;
  
  bVar1 = read_two_byte_value_1044ba3a((void *)param_1);
  return ((int)(uint)bVar1 >> 4) + 2000;
}
