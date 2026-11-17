/* @k10d store_value_at_offset_0x3c @ 0x10432dc8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 117_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x3c(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 0x3c) = param_2;
  return;
}
