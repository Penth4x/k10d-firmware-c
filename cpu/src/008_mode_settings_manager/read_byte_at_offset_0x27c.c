/* @k10d read_byte_at_offset_0x27c @ 0x103674be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_0x27c(void *param_1)

{
  return *(uint8_t *)((int)param_1 + 0x27c);
}
