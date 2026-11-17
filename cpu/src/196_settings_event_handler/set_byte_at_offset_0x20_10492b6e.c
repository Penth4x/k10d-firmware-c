/* @k10d set_byte_at_offset_0x20_10492b6e @ 0x10492b6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_byte_at_offset_0x20_10492b6e(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x20) = param_2;
  return 1;
}
