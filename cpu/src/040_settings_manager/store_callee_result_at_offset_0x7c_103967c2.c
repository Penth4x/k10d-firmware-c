/* @k10d store_callee_result_at_offset_0x7c_103967c2 @ 0x103967c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_callee_result_at_offset_0x7c_103967c2(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_singleton_object_10395bd6();
  *(uint32_t *)((int)param_1 + 0x7c) = uVar1;
  return;
}
