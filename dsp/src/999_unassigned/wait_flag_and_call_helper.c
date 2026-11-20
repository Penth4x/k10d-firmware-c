/* @k10d wait_flag_and_call_helper @ 0x000d5f1c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Spins until a bit in DAT_0000014f is set, then calls check_low_nibble_flag and sets a
 *   flag if it returns zero.
 * summary:
 *   The function first checks if bit 4 of DAT_000000c0 is set, returning immediately if so.
 *   It then enters a loop waiting for bit 4 of DAT_0000014f to become set. Once the
 *   condition is met, it calls check_low_nibble_flag. If that call returns 0, it sets
 *   DAT_0003c319 to 1. The specific roles of the data globals and the callee are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_flag_and_call_helper(void)

{
  int iVar1;
  
  do {
    if ((DAT_000000c0 & 0x10) != 0) {
      return;
    }
  } while ((DAT_0000014f & 0x10) == 0);
  iVar1 = check_low_nibble_flag();
  if (iVar1 == 0) {
    DAT_0003c319 = 1;
  }
  return;
}
