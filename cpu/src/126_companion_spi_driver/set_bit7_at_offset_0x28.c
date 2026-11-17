/* @k10d set_bit7_at_offset_0x28 @ 0x1044063e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit7_at_offset_0x28(void *param_1)

{
  **(byte **)((int)param_1 + 0x28) = **(byte **)((int)param_1 + 0x28) | 0x80;
  return;
}
