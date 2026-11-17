/* @k10d store_value_at_offset_0x7c @ 0x10392be2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x7c(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_sram_object_103973c4();
  *(uint32_t *)((int)param_1 + 0x7c) = uVar1;
  return;
}
