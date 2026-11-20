/* @k10d clear_dat_0003c01e @ 0x000e5314
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets the global variable DAT_0003c01e to zero.
 * summary:
 *   The function performs a single write operation, assigning the value 0 to the global
 *   variable DAT_0003c01e. It has no other side effects, does not call any other functions,
 *   and returns immediately. The specific role or meaning of DAT_0003c01e is not
 *   determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_dat_0003c01e(void)

{
  DAT_0003c01e = 0;
  return;
}
