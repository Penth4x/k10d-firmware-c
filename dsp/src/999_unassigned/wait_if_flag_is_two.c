/* @k10d wait_if_flag_is_two @ 0x000d5676
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Spins for 8 iterations if the low two bits of DAT_00000484 equal 2.
 * summary:
 *   Checks bits 0-1 of the global DAT_00000484. If the value is 2, it executes a tight loop
 *   decrementing a counter from 8 to 0, effectively a short busy-wait. No other side
 *   effects or callees are present. The role of DAT_00000484 is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000d5690) */
/* WARNING: Removing unreachable block (ram,0x000d5698) */
/* WARNING: Removing unreachable block (ram,0x000d569c) */
/* WARNING: Removing unreachable block (ram,0x000d56f8) */

void wait_if_flag_is_two(void)

{
  int iVar1;
  
  if ((DAT_00000484 & 3) == 2) {
    iVar1 = 8;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
