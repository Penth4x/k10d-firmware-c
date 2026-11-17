/* @k10d set_byte_at_offset_0x4f @ 0x10488f8a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_0x4f(void *param_1,uint8_t param_2)

{
  *(uint8_t *)((int)param_1 + 0x4f) = param_2;
  return;
}
