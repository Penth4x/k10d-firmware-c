/* @k10d set_field_at_offset_0x18 @ 0x104927e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_field_at_offset_0x18(void *param_1,uint8_t param_2)

{
  set_byte_at_offset_0x20_10492b6e(*(int *)((int)param_1 + 0x18),param_2);
  return 1;
}
