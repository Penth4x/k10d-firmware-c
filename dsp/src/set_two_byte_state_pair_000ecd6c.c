/* @k10d set_two_byte_state_pair_000ecd6c @ 0x000ecd6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes 0 to DAT_000000d4 and 3 to DAT_000000d7.
 * summary:
 *   The function performs two simple global writes: it clears the byte at DAT_000000d4 and
 *   sets the byte at DAT_000000d7 to 3. It has no callees and no other side effects. The
 *   roles of these two globals are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_byte_state_pair_000ecd6c(void)

{
  DAT_000000d4 = 0;
  DAT_000000d7 = 3;
  return;
}
