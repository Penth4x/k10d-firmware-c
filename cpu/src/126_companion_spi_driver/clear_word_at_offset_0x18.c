/* @k10d clear_word_at_offset_0x18 @ 0x1043bd2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a04cc": ignoring multiple overlapping fields */

void clear_word_at_offset_0x18(cls_105a04cc *param_1)

{
  *(uint16_t *)param_1->field_0x18 = 0;
  return;
}
