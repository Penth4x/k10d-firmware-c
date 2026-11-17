/* @k10d store_value_at_offset_1042837e @ 0x1042837e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_1042837e(int param_1,uint32_t param_2,int param_3)

{
  if (param_3 == 0) {
    *(uint32_t *)(param_1 + 0x20) = param_2;
  }
  else {
    *(uint32_t *)(param_1 + 0x2c) = param_2;
  }
  return;
}
