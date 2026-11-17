/* @k10d set_byte_at_offset_0x1c @ 0x10491f84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_byte_at_offset_0x1c(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x1c) = param_2;
  return 1;
}
