/* @k10d clear_dat_000000ce @ 0x000f824c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets the global variable DAT_000000ce to zero.
 * summary:
 *   The function performs a single write operation, assigning the value 0 to the global
 *   variable DAT_000000ce. It has no other side effects, does not call any other functions,
 *   and returns immediately. The role of DAT_000000ce is not determinable from the provided
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_dat_000000ce(void)

{
  DAT_000000ce = 0;
  return;
}
