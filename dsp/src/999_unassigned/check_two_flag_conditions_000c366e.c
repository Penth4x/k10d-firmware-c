/* @k10d check_two_flag_conditions_000c366e @ 0x000c366e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Tests two bit flags in global variables and calls a helper if the first is clear and
 *   the second is set.
 * summary:
 *   The function checks bit 1 of DAT_0003c58b and bit 6 of DAT_0003c4d6. If bit 1 of the
 *   first is 0 and bit 6 of the second is 1, it calls FUN_000c3688 with argument 1. No
 *   other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_two_flag_conditions_000c366e(void)

{
  if (((DAT_0003c58b & 2) == 0) && ((DAT_0003c4d6 & 0x40) != 0)) {
    FUN_000c3688(1);
  }
  return;
}
