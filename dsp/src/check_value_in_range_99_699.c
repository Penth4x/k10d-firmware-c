/* @k10d check_value_in_range_99_699 @ 0x000e8a9a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls poll_until_transfer_complete to populate two shorts, then returns 1 if the first
 *   short is between 100 and 699 inclusive.
 * summary:
 *   Initializes a local array of two shorts to zero and passes it to
 *   poll_until_transfer_complete with a constant argument of 700. It sets DAT_0003c040 to
 *   0x40 if the first short returned by poll_until_transfer_complete is in the range [100,
 *   699], otherwise it remains 0. The function returns 1 if the range check passes, 0
 *   otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

uint32_t check_value_in_range_99_699(void)

{
  uint32_t uVar1;
  uintptr_t sp;
  ushort auStack_14 [2];
  
  uVar1 = 0;
  auStack_14[0] = 0;
  auStack_14[1] = 0;
  poll_until_transfer_complete(0,auStack_14,auStack_14 + 1,700);
  DAT_0003c040 = 0;
  if ((99 < auStack_14[0]) && (auStack_14[0] < 0x2bd)) {
    DAT_0003c040 = 0x40;
    uVar1 = 1;
  }
  return uVar1;
}
