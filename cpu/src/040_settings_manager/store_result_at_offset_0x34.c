/* @k10d store_result_at_offset_0x34 @ 0x10393a16
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_at_offset_0x34(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_singleton_object_10393fbc();
  *(uint32_t *)((int)param_1 + 0x34) = uVar1;
  return;
}
