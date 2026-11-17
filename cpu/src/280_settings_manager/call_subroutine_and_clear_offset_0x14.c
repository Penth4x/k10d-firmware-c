/* @k10d call_subroutine_and_clear_offset_0x14 @ 0x10521b32
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_and_clear_offset_0x14(int param_1)

{
  (*(code *)0x10521cba/*ROM*/)();
  *(uint8_t *)(param_1 + 0x14) = 0;
  return;
}
