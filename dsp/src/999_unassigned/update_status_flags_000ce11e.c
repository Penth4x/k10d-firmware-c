/* @k10d update_status_flags_000ce11e @ 0x000ce11e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Modifies specific bits in global status variables based on input parameter and current
 *   flag states.
 * summary:
 *   The function branches on param_1. If zero, it clears and sets bits in DAT_000000d1 and
 *   DAT_000000f6 while calling check_and_run_gated_sequence, gated by checks on
 *   DAT_0003ce00, DAT_0003c4d6, and DAT_00000001. If non-zero, it manipulates DAT_0003c022
 *   and DAT_0003ce06 based on DAT_0003c3b4. It returns the potentially modified param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int update_status_flags_000ce11e(int param_1)

{
  if (param_1 == 0) {
    if ((((DAT_0003ce00 & 0xe0) == 0) && ((DAT_0003c4d6 & 4) != 0)) && ((DAT_00000001 & 0x10) == 0))
    {
      DAT_000000d1 = DAT_000000d1 & 0xfe;
      DAT_000000f6 = DAT_000000f6 & 0x7f;
      check_and_run_gated_sequence();
      DAT_000000d1 = DAT_000000d1 | 1;
      DAT_000000f6 = DAT_000000f6 | 0x80;
    }
  }
  else if ((DAT_0003c022 & 0x40) != 0) {
    if (DAT_0003c3b4 == '\x01') {
      if ((DAT_0003ce06 & 0x10) == 0) {
        param_1 = 0;
      }
      else {
        DAT_0003c022 = DAT_0003c022 & 0xbf;
        param_1 = 1;
      }
    }
    else {
      DAT_0003ce06 = DAT_0003ce06 | 0x80;
    }
  }
  return param_1;
}
