/* @k10d write_two_bytes_to_offset_six_10435624 @ 0x10435624
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_offset_six_10435624(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 6) = param_2;
  return;
}
