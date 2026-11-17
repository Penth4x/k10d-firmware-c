/* @k10d store_two_bytes_at_offset_ten @ 0x10435630
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_bytes_at_offset_ten(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 10) = param_2;
  return;
}
