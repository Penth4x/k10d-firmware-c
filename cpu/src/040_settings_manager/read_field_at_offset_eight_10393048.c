/* @k10d read_field_at_offset_eight_10393048 @ 0x10393048
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_eight_10393048(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_offset_0x30_field(param_1 + 8);
  return uVar1;
}
