/* @k10d check_and_set_flag_pair @ 0x000e087c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks two high-bit flags and a low-bit state, then sets the state to 3 and calls a
 *   helper.
 * summary:
 *   The function tests if bits 7 of DAT_0003c127 and DAT_0003c128 are set, and bit 0 of
 *   DAT_0003c133 is clear. If true, it sets DAT_0003c133 to 3 and calls
 *   check_key_and_dispatch with arguments 0xb9 and 3. The specific roles of these data
 *   globals and the callee are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_set_flag_pair(void)

{
  if ((((DAT_0003c127 & 0x80) != 0) && ((DAT_0003c128 & 0x80) != 0)) && ((DAT_0003c133 & 1) == 0)) {
    DAT_0003c133 = 3;
    check_key_and_dispatch(0xb9,3);
  }
  return;
}
