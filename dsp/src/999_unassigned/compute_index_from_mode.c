/* @k10d compute_index_from_mode @ 0x000d5860
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a small index value based on a mode flag and stores it in two global
 *   variables.
 * summary:
 *   The function checks bits 0-1 of DAT_00000484. If the value is 2, it doubles param_1;
 *   otherwise, it performs a right-shift by 1 after adding 1 (ceiling division by 2). The
 *   result is decremented by 1 and stored in DAT_00000050. DAT_00000056 is unconditionally
 *   set to 0x13. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_index_from_mode(int param_1)

{
  char cVar1;
  
  if ((DAT_00000484 & 3) == 2) {
    cVar1 = (char)(param_1 << 1);
  }
  else {
    cVar1 = (char)(param_1 + 1U >> 1);
  }
  DAT_00000050 = cVar1 + -1;
  DAT_00000056 = 0x13;
  return;
}
