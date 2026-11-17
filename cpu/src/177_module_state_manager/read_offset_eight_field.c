/* @k10d read_offset_eight_field @ 0x10483fc0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_offset_eight_field(void *param_1)

{
  return *(uint32_t *)((int)param_1 + 8);
}
