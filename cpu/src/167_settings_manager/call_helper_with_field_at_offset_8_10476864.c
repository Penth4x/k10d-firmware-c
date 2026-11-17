/* @k10d call_helper_with_field_at_offset_8_10476864 @ 0x10476864
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_field_at_offset_8_10476864(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = call_helper_with_offset_pointer_104752e2(*(int *)(param_1 + 8));
  return uVar1;
}
