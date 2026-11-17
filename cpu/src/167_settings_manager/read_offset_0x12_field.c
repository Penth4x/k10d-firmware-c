/* @k10d read_offset_0x12_field @ 0x10476d26
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_offset_0x12_field(int param_1)

{
  return *(uint16_t *)(param_1 + 0x12);
}
