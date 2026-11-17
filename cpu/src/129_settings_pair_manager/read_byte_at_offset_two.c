/* @k10d read_byte_at_offset_two @ 0x1045c670
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_two(void *param_1)

{
  return *(uint8_t *)((int)param_1 + 2);
}
