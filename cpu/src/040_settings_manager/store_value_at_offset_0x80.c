/* @k10d store_value_at_offset_0x80 @ 0x10393e40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x80(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x80) = param_2;
  return;
}
