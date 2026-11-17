/* @k10d store_result_at_offset_0x38 @ 0x10395a0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_at_offset_0x38(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_singleton_object_10391da4();
  *(uint32_t *)((int)param_1 + 0x38) = uVar1;
  return;
}
