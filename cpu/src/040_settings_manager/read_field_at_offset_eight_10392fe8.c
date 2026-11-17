/* @k10d read_field_at_offset_eight_10392fe8 @ 0x10392fe8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_eight_10392fe8(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_offset_0x24_field(param_1 + 8);
  return uVar1;
}
