/* @k10d toggle_bit_and_call_two_routines @ 0x000d5afc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 0 of DAT_000000d1, sets bit 1 of DAT_0003c321, calls two routines, then
 *   reverses both bit changes and returns DAT_0003c319.
 * summary:
 *   The function performs a bracketed bit manipulation: it clears the LSB of DAT_000000d1
 *   and sets bit 1 of DAT_0003c321, then invokes FUN_000d5b38 and
 *   dispatch_state_handler_000d64ca. After the calls, it restores the original bit states
 *   by clearing bit 1 of DAT_0003c321 and setting the LSB of DAT_000000d1. Finally, it
 *   returns the value of DAT_0003c319. The roles of the two callees and the specific
 *   meaning of the bit flags are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t toggle_bit_and_call_two_routines(uint32_t param_x0)

{
  DAT_000000d1 = DAT_000000d1 & 0xfe;
  DAT_0003c321 = DAT_0003c321 | 2;
  FUN_000d5b38(__frv_reg_unset(4));
  dispatch_state_handler_000d64ca();
  DAT_0003c321 = DAT_0003c321 & 0xfd;
  DAT_000000d1 = DAT_000000d1 | 1;
  return DAT_0003c319;
}
