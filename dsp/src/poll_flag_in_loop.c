/* @k10d poll_flag_in_loop @ 0x000d739e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets and clears bits in DAT_0003ce62 while looping until bit 5 of DAT_0003cf0e is set.
 * summary:
 *   The function calls FUN_000cdaa4, sets bit 0 of DAT_0003ce62, clears DAT_0003ce63, and
 *   clears bit 3 of DAT_0003cf0e. It then enters a do-while loop that sets bit 1 of
 *   DAT_0003ce62, calls process_buffered_value_with_scaling and FUN_000d5642 with
 *   DAT_0003ce17, clears DAT_0003ce17 and bit 1 of DAT_0003ce08, and repeats until bit 5 of
 *   DAT_0003cf0e is set. Finally it calls clear_flag_and_set_state and FUN_000cdaa4, and
 *   clears bit 1 of DAT_0003ce62.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_flag_in_loop(void)

{
  FUN_000cdaa4();
  DAT_0003ce62 = DAT_0003ce62 | 1;
  DAT_0003ce63 = 0;
  DAT_0003cf0e = DAT_0003cf0e & 0xdf;
  do {
    DAT_0003ce62 = DAT_0003ce62 | 2;
    process_buffered_value_with_scaling();
    FUN_000d5642(DAT_0003ce17);
    DAT_0003ce17 = 0;
    DAT_0003ce08 = DAT_0003ce08 & 0xfd;
  } while ((DAT_0003cf0e & 0x20) == 0);
  clear_flag_and_set_state();
  FUN_000cdaa4();
  DAT_0003ce62 = DAT_0003ce62 & 0xfd;
  return;
}
