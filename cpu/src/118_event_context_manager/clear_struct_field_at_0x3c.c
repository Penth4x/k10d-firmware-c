/* @k10d clear_struct_field_at_0x3c @ 0x10432df6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 118_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_field_at_0x3c(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x3c) = 0;
  return;
}
