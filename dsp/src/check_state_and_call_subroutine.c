/* @k10d check_state_and_call_subroutine @ 0x000db1d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks two global flags and conditionally calls FUN_000db218.
 * summary:
 *   The function first checks if bit 0 of DAT_0003c036 is clear. If so, it examines
 *   DAT_0003c493 and DAT_0003c492. If DAT_0003c493 is 0x08, or if it is 0x09 and
 *   DAT_0003c492 is one of {0x00, 0x01, 0x02, 0x03, 0x06}, it calls FUN_000db218. No other
 *   side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_state_and_call_subroutine(void)

{
  if ((DAT_0003c036 & 1) == 0) {
    if (DAT_0003c493 == '\b') {
      FUN_000db218();
    }
    else if ((DAT_0003c493 == '\t') &&
            ((((DAT_0003c492 == '\0' || (DAT_0003c492 == '\x01')) || (DAT_0003c492 == '\x02')) ||
             ((DAT_0003c492 == '\x03' || (DAT_0003c492 == '\x06')))))) {
      FUN_000db218();
    }
  }
  return;
}
