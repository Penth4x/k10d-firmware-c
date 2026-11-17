/* @k10d copy_dat_0003c46c_to_0003c46b @ 0x000f3ca4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies the value of global DAT_0003c46c into global DAT_0003c46b.
 * summary:
 *   The function performs a single assignment from DAT_0003c46c to DAT_0003c46b and
 *   returns. No other operations, memory accesses, or function calls are present. The roles
 *   of these two globals are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_dat_0003c46c_to_0003c46b(void)

{
  DAT_0003c46b = DAT_0003c46c;
  return;
}
