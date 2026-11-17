/* @k10d store_byte_at_offset_0xc @ 0x1043555a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_byte_at_offset_0xc(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0xc) = param_2;
  return;
}
