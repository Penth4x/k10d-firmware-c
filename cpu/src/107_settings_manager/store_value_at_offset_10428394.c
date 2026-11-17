/* @k10d store_value_at_offset_10428394 @ 0x10428394
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_10428394(int param_1,uint32_t param_2,int param_3)

{
  if (param_3 == 0) {
    *(uint32_t *)(param_1 + 0x24) = param_2;
  }
  else {
    *(uint32_t *)(param_1 + 0x30) = param_2;
  }
  return;
}
