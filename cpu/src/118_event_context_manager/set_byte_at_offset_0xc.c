/* @k10d set_byte_at_offset_0xc @ 0x104330ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 118_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_0xc(void *param_1,uint8_t param_2)

{
  *(uint8_t *)((int)param_1 + 0xc) = param_2;
  return;
}
