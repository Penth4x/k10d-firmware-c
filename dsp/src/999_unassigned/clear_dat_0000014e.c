/* @k10d clear_dat_0000014e @ 0x000d5e4c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets the global variable DAT_0000014e to zero.
 * summary:
 *   The function performs a single store operation, writing the value 0 to the global
 *   variable DAT_0000014e. It has no other side effects, no conditional logic, and no calls
 *   to other functions. The role of DAT_0000014e is not determinable from the provided
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_dat_0000014e(void)

{
  DAT_0000014e = 0;
  return;
}
