/* @k10d set_flag_and_call_two_helpers_10432c64 @ 0x10432c64
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 117_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_two_helpers_10432c64(int param_1)

{
  *(uint8_t *)(param_1 + 0x2d) = 1;
  wait_and_call_two_helpers(*(uint32_t *)(param_1 + 0x38));
  set_flag_at_offset_0x9d(param_1);
  return;
}
