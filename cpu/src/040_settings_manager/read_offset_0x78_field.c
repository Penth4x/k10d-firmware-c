/* @k10d read_offset_0x78_field @ 0x10395568
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_offset_0x78_field(int param_1)

{
  return *(uint32_t *)(param_1 + 0x78);
}
