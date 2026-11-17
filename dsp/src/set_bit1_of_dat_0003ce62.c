/* @k10d set_bit1_of_dat_0003ce62 @ 0x000d0f84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets or clears bit 1 of DAT_0003ce62 based on param_1, then calls
 *   set_flag_and_call_helper_000db7a8.
 * summary:
 *   The function tests bit 0 of param_1. If clear, it clears bit 1 of the global
 *   DAT_0003ce62 (mask 0xfd); if set, it sets bit 1 (OR with 2). It then unconditionally
 *   calls set_flag_and_call_helper_000db7a8. The role of DAT_0003ce62 and
 *   set_flag_and_call_helper_000db7a8 is not determinable from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit1_of_dat_0003ce62(uint param_1)

{
  if ((param_1 & 1) == 0) {
    DAT_0003ce62 = DAT_0003ce62 & 0xfd;
  }
  else {
    DAT_0003ce62 = DAT_0003ce62 | 2;
  }
  set_flag_and_call_helper_000db7a8();
  return;
}
