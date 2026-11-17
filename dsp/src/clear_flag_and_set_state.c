/* @k10d clear_flag_and_set_state @ 0x000d0e40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 1 of a state word and sets bit 3 of a control word if a specific condition
 *   is met.
 * summary:
 *   The function checks if bit 0 of DAT_0003ce62 is set. If so, it clears bit 1 of
 *   DAT_0003ce08, zeroes DAT_0003ce17, and sets bit 3 of DAT_0003ce62 if bit 0 of
 *   DAT_0003c036 is clear. No external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_set_state(void)

{
  if ((DAT_0003ce62 & 1) != 0) {
    DAT_0003ce08 = DAT_0003ce08 & 0xfd;
    DAT_0003ce17 = 0;
    if ((DAT_0003c036 & 1) == 0) {
      DAT_0003ce62 = DAT_0003ce62 | 8;
    }
  }
  return;
}
