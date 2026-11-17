/* @k10d compute_value_from_mode_flags @ 0x000c5c8a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns a computed or constant value based on the state of DAT_0003c444 and
 *   DAT_0003c127.
 * summary:
 *   The function branches on the value of DAT_0003c444 (0, 1, 2, or 3) and the bit 2 of
 *   DAT_0003c127. For specific combinations, it calls compute_and_write_scaled_value and
 *   divide_two_integers to calculate the result; otherwise, it returns hardcoded constants
 *   like 0x2a, 0x7e, or 0x38. The input parameter is overwritten and used as the return
 *   value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_value_from_mode_flags(uint param_1)

{
  int iVar1;
  
  if (DAT_0003c444 == '\0') {
    if ((DAT_0003c127 & 4) == 0) {
      iVar1 = compute_and_write_scaled_value();
      param_1 = (uint)(iVar1 * 5) >> 3;
    }
    else {
      param_1 = 0x2a;
    }
  }
  else if ((DAT_0003c444 == '\x01') || (DAT_0003c444 == '\x03')) {
    param_1 = 0x7e;
  }
  else if (DAT_0003c444 == '\x02') {
    if ((DAT_0003c127 & 4) == 0) {
      iVar1 = compute_and_write_scaled_value();
      param_1 = divide_two_integers(iVar1 * 3,4);
    }
    else {
      param_1 = 0x38;
    }
  }
  return param_1;
}
