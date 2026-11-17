/* @k10d store_result_at_offset_0x44 @ 0x10397550
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_at_offset_0x44(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = dispatch_on_mode_value((int)param_1);
  *(uint32_t *)((int)param_1 + 0x44) = uVar1;
  return;
}
