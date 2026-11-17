/* @k10d write_short_to_array_offset @ 0x10435636
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_short_to_array_offset(int param_1,int param_2,uint16_t param_3)

{
  *(uint16_t *)(param_1 + 4 + param_2 * 2) = param_3;
  return;
}
