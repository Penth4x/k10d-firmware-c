/* @k10d set_byte_at_offset_0x52 @ 0x10488906
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_0x52(void *param_1,uint8_t param_2)

{
  *(uint8_t *)((int)param_1 + 0x52) = param_2;
  return;
}
