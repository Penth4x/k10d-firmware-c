/* @k10d store_value_at_offset_0x6c @ 0x10393d98
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x6c(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_singleton_object_10391da4();
  *(uint32_t *)((int)param_1 + 0x6c) = uVar1;
  return;
}
