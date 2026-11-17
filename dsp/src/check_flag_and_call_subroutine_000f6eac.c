/* @k10d check_flag_and_call_subroutine_000f6eac @ 0x000f6eac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks bit 6 of DAT_0003c128 and calls poll_keypad_with_retry with arguments 0x80 and
 *   0x16 if set.
 * summary:
 *   The function tests bit 6 (0x40) of the global variable DAT_0003c128. If the bit is set,
 *   it invokes poll_keypad_with_retry with the constant arguments 0x80 and 0x16. The role
 *   of DAT_0003c128 and poll_keypad_with_retry is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_call_subroutine_000f6eac(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    poll_keypad_with_retry(0x80,0x16);
  }
  return;
}
