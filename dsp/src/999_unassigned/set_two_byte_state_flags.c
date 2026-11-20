/* @k10d set_two_byte_state_flags @ 0x000ecd80
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes 0 to DAT_000000d8 and 1 to DAT_000000db.
 * summary:
 *   The function performs two simple global writes: it clears the byte at DAT_000000d8 and
 *   sets the byte at DAT_000000db to 1. No other operations, branches, or callees are
 *   present. The roles of these two globals are not determinable from the provided
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_byte_state_flags(void)

{
  DAT_000000d8 = 0;
  DAT_000000db = 1;
  return;
}
