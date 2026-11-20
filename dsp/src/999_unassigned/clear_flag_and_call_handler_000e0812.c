/* @k10d clear_flag_and_call_handler_000e0812 @ 0x000e0812
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks three global flag bits and, if all set, clears one and calls
 *   check_key_and_dispatch with arguments 0xb9 and 0.
 * summary:
 *   The function tests bit 7 of DAT_0003c127, bit 7 of DAT_0003c128, and bit 0 of
 *   DAT_0003c133. If all three conditions are true, it sets DAT_0003c133 to 0 and invokes
 *   check_key_and_dispatch(0xb9, 0). The role of the DAT_0003c1xx globals and the callee is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_handler_000e0812(void)

{
  if ((((DAT_0003c127 & 0x80) != 0) && ((DAT_0003c128 & 0x80) != 0)) && ((DAT_0003c133 & 1) != 0)) {
    DAT_0003c133 = 0;
    check_key_and_dispatch(0xb9,0);
  }
  return;
}
