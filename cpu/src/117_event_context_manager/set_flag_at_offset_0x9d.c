/* @k10d set_flag_at_offset_0x9d @ 0x10432d96
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 117_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x9d(int param_1)

{
  *(uint8_t *)(param_1 + 0x9d) = 1;
  return;
}
