/* @k10d read_field_at_offset_0x86c @ 0x104b7562
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_0x86c(int param_1)

{
  return *(uint32_t *)(param_1 + 0x86c);
}
