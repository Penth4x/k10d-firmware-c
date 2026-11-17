/* @k10d get_field_at_offset_0x28 @ 0x1050b874
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_at_offset_0x28(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x28));
  return uVar1;
}
