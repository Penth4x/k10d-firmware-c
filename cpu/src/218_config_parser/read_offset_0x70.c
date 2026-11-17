/* @k10d read_offset_0x70 @ 0x104b69a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 218_config_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_offset_0x70(int param_1)

{
  return *(uint32_t *)(param_1 + 0x70);
}
