/* @k10d clear_offset_0x18_field @ 0x1043c348
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_offset_0x18_field(void *param_1)

{
  **(uint16_t **)((int)param_1 + 0x18) = 0;
  return;
}
