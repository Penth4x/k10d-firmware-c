/* @k10d store_value_at_offset_0x20 @ 0x104420c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x20(int param_1,uint32_t param_2)

{
  **(uint32_t **)(param_1 + 0x20) = param_2;
  return;
}
