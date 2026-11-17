/* @k10d check_short_field_at_offset_0x28 @ 0x1047ee48
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_short_field_at_offset_0x28(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 2;
  if (*(short *)(param_1 + 0x28) != 0x20) {
    uVar1 = 1;
  }
  return uVar1;
}
