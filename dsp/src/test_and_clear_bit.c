/* @k10d test_and_clear_bit @ 0x000e6238
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Tests a bit in a global byte, clears it if set, and returns whether it was set.
 * summary:
 *   Reads DAT_0003c034 and checks if its least significant bit is set. If the bit is set,
 *   it updates DAT_0003c032 with the value of DAT_0003c030 and clears the bit in
 *   DAT_0003c030. Returns true if the bit was set, false otherwise. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_and_clear_bit(void)

{
  uint uVar1;
  
  uVar1 = _DAT_00000001 & DAT_0003c034;
  if (uVar1 != DAT_0003c034) {
    DAT_0003c032 = DAT_0003c030;
    DAT_0003c030 = (DAT_0003c034 ^ 0xff) & DAT_0003c030 | (byte)uVar1;
  }
  return uVar1 != DAT_0003c034;
}
