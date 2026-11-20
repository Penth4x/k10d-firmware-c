/* @k10d invert_byte_at_offset_0x127 @ 0x1043d758
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invert_byte_at_offset_0x127(cls_105a0828 *param_1)

{
  *(byte *)param_1->field_0x118 = param_1->field_0x127 ^ 0xff;
  return;
}
