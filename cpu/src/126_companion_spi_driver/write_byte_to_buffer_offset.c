/* @k10d write_byte_to_buffer_offset @ 0x10436542
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_buffer_offset(int param_1,int param_2,uint8_t param_3)

{
  *(uint8_t *)(param_1 + 4 + param_2) = param_3;
  return;
}
