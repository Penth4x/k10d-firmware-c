/* @k10d read_field_at_offset_0xf4 @ 0x103931e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_0xf4(int param_1)

{
  return *(uint32_t *)(param_1 + 0xf4);
}
