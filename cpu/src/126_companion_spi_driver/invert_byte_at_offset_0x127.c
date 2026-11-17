/* @k10d invert_byte_at_offset_0x127 @ 0x1043d758
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invert_byte_at_offset_0x127(void *param_1)

{
  **(byte **)((int)param_1 + 0x118) = *(byte *)((int)param_1 + 0x127) ^ 0xff;
  return;
}
