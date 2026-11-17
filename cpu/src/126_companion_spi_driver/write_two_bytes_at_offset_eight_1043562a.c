/* @k10d write_two_bytes_at_offset_eight_1043562a @ 0x1043562a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_at_offset_eight_1043562a(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 8) = param_2;
  return;
}
