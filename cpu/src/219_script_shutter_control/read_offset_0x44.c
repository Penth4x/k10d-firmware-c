/* @k10d read_offset_0x44 @ 0x104b7398
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_offset_0x44(int param_1)

{
  return *(uint32_t *)(param_1 + 0x44);
}
