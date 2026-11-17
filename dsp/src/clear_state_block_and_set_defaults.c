/* @k10d clear_state_block_and_set_defaults @ 0x000ca672
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Zeroes a 16-byte block of globals, sets three bytes to 4, clears a bit in another
 *   global, and sets three bytes to 0x40.
 * summary:
 *   The function performs a series of direct writes to global variables in the 0x0003c4xx
 *   range. It initializes most of the block to 0, sets DAT_0003c452, DAT_0003c453, and
 *   DAT_0003c454 to 4, and sets DAT_0003c48a, DAT_0003c48b, and DAT_0003c48c to 0x40. It
 *   also clears bit 3 of DAT_0003c4d0 and zeroes DAT_0003c041. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_state_block_and_set_defaults(void)

{
  DAT_0003c44a = 0;
  DAT_0003c44b = 0;
  DAT_0003c44c = 0;
  DAT_0003c44d = 0;
  DAT_0003c44e = 0;
  DAT_0003c44f = 0;
  DAT_0003c450 = 0;
  DAT_0003c451 = 0;
  DAT_0003c452 = 4;
  DAT_0003c453 = 4;
  DAT_0003c454 = 4;
  DAT_0003c455 = 0;
  DAT_0003c456 = 0;
  DAT_0003c457 = 0;
  DAT_0003c458 = 0;
  DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
  DAT_0003c041 = 0;
  DAT_0003c48a = 0x40;
  DAT_0003c48b = 0x40;
  DAT_0003c48c = 0x40;
  return;
}
