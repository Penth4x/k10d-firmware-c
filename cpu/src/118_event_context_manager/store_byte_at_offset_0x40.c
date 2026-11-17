/* @k10d store_byte_at_offset_0x40 @ 0x10432f86
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 118_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_byte_at_offset_0x40(void *param_1,uint8_t param_2)

{
  *(uint8_t *)((int)param_1 + 0x40) = param_2;
  return;
}
