/* @k10d read_byte_at_offset_0x42 @ 0x104b739e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_0x42(int param_1)

{
  return *(uint8_t *)(param_1 + 0x42);
}
