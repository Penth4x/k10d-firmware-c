/* @k10d store_value_at_offset_0xb4 @ 0x10395e26
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0xb4(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_singleton_object_10396dd4();
  *(uint32_t *)((int)param_1 + 0xb4) = uVar1;
  return;
}
