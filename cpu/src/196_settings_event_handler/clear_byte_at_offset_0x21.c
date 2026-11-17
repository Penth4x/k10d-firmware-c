/* @k10d clear_byte_at_offset_0x21 @ 0x10492b7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_at_offset_0x21(int param_1)

{
  *(uint8_t *)(param_1 + 0x21) = 0;
  return;
}
