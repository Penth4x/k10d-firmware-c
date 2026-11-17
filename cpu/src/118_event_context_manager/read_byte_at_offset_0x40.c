/* @k10d read_byte_at_offset_0x40 @ 0x10432f80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 118_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_0x40(void *param_1)

{
  return *(uint8_t *)((int)param_1 + 0x40);
}
