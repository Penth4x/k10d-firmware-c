/* @k10d clear_byte_at_offset_0x40 @ 0x104b73be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_at_offset_0x40(int param_1)

{
  *(uint8_t *)(param_1 + 0x40) = 0;
  return;
}
