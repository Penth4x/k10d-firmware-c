/* @k10d set_two_globals_to_constants @ 0x000cdfd6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes the constant 3 to DAT_000000ec and 0 to DAT_0000048c.
 * summary:
 *   The function performs two simple global memory writes and returns. It sets DAT_000000ec
 *   to 3 and DAT_0000048c to 0. No other operations, branches, or function calls are
 *   present in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_globals_to_constants(void)

{
  DAT_000000ec = 3;
  DAT_0000048c = 0;
  return;
}
