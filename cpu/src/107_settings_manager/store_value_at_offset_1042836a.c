/* @k10d store_value_at_offset_1042836a @ 0x1042836a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_1042836a(int param_1,uint32_t param_2,int param_3)

{
  if (param_3 == 0) {
    *(uint32_t *)(param_1 + 0x1c) = param_2;
  }
  else {
    *(uint32_t *)(param_1 + 0x28) = param_2;
  }
  return;
}
