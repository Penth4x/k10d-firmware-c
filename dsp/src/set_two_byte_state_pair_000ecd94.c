/* @k10d set_two_byte_state_pair_000ecd94 @ 0x000ecd94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes the constant values 0 and 3 to two adjacent global memory locations.
 * summary:
 *   The function unconditionally sets DAT_000000d8 to 0 and DAT_000000db to 3. It has no
 *   parameters, no return value, and no callees. The specific role of these globals is not
 *   determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_byte_state_pair_000ecd94(void)

{
  DAT_000000d8 = 0;
  DAT_000000db = 3;
  return;
}
