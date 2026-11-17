/* @k10d store_result_at_offset_0x84 @ 0x103922e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_at_offset_0x84(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_singleton_object_10395bd6();
  *(uint32_t *)((int)param_1 + 0x84) = uVar1;
  return;
}
