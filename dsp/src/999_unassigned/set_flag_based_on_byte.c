/* @k10d set_flag_based_on_byte @ 0x000e135a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes 2 or 4 to a global byte based on the value of another global byte.
 * summary:
 *   Checks if DAT_0003c129 equals 1. If true, sets _DAT_0003c126 to 2; otherwise, sets it
 *   to 4. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_based_on_byte(void)

{
  if (DAT_0003c129 == '\x01') {
    _DAT_0003c126 = 2;
  }
  else {
    _DAT_0003c126 = 4;
  }
  return;
}
