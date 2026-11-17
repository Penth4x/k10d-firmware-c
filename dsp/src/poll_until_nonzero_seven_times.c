/* @k10d poll_until_nonzero_seven_times @ 0x000e8ae4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls FUN_000e8afe up to seven times, returning early if it returns a non-zero value.
 * summary:
 *   The function initializes a counter to 7 and enters a do-while loop. Each iteration
 *   calls FUN_000e8afe and decrements the counter. If FUN_000e8afe returns a non-zero
 *   value, the loop exits immediately. If the counter reaches zero, the function returns.
 *   The role of FUN_000e8afe is unknown, so the specific hardware or logical condition
 *   being polled is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_until_nonzero_seven_times(void)

{
  int iVar1;
  short sVar2;
  
  sVar2 = 7;
  do {
    iVar1 = FUN_000e8afe();
    sVar2 = sVar2 + -1;
    if (sVar2 == 0) {
      return iVar1;
    }
  } while (iVar1 == 0);
  return iVar1;
}
