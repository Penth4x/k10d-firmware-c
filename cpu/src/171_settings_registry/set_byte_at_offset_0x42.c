/* @k10d set_byte_at_offset_0x42 @ 0x1047f940
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_0x42(int *param_1,uint8_t param_2)

{
  *(uint8_t *)(*param_1 + 0x42) = param_2;
  return;
}
