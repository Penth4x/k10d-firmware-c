/* @k10d select_status_code_by_param @ 0x000f4912
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns a small integer code (0x1b-0x29) based on param_1 and two global flags.
 * summary:
 *   The function branches on param_1 (0,1,2,4) and the values of DAT_0003c3ac and
 *   DAT_0003c028 to select a return value. For param_1 0 or 4, it clears bit 4 of
 *   DAT_0003c4b6 and returns 0x1c or 0x29. For param_1 1, it calls clamp_value_and_set_flag
 *   and clamp_value_with_flags. For other values, it returns 0x1b or 0x28, with conditional
 *   adjustments if param_1 is 2 and bit 1 of DAT_0003c028 is clear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_status_code_by_param(int param_1)

{
  uint32_t uVar1;
  
  if ((param_1 == 0) || (param_1 == 4)) {
    DAT_0003c4b6 = DAT_0003c4b6 & 0xef;
    if (DAT_0003c3ac == '\0') {
      uVar1 = 0x1c;
    }
    else {
      uVar1 = 0x29;
    }
  }
  else if (param_1 == 1) {
    uVar1 = clamp_value_and_set_flag(DAT_0003c480);
    uVar1 = clamp_value_with_flags(uVar1);
  }
  else if (DAT_0003c3ac == '\0') {
    uVar1 = 0x1b;
    if ((param_1 == 2) && ((DAT_0003c028 & 2) == 0)) {
      uVar1 = 0x1c;
      DAT_0003c4b6 = DAT_0003c4b6 & 0xef;
    }
  }
  else {
    uVar1 = 0x28;
    if ((param_1 == 2) && ((DAT_0003c028 & 2) == 0)) {
      uVar1 = 0x29;
      DAT_0003c4b6 = DAT_0003c4b6 & 0xef;
    }
  }
  return uVar1;
}
