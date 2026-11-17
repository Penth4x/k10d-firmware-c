/* @k10d read_byte_at_offset_0x1d @ 0x10492006
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_0x1d(int param_1)

{
  return *(uint8_t *)(param_1 + 0x1d);
}
