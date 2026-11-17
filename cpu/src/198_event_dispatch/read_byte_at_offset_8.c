/* @k10d read_byte_at_offset_8 @ 0x10493d8e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_8(int param_1)

{
  return *(uint8_t *)(param_1 + 8);
}
