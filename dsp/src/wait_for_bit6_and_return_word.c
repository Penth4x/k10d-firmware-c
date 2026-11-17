/* @k10d wait_for_bit6_and_return_word @ 0x000e2e82
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Sets bit 1 and bit 7 in two globals, waits for bit 6 to be set in both, then returns a
 *   16-bit value from two globals.
 * summary:
 *   The function ORs 0x82 into DAT_00000079 and _DAT_00000082, then busy-waits until bit 6
 *   (0x40) is set in the previously saved copies of both globals. It finally returns
 *   (_DAT_00000088 << 0x10) | _DAT_00000082. No callees are present; the role of the DAT
 *   globals is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wait_for_bit6_and_return_word(void)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = _DAT_00000082;
  bVar1 = DAT_00000079;
  DAT_00000079 = DAT_00000079 | 0x82;
  _DAT_00000082 = _DAT_00000082 | 0x82;
  do {
  } while ((bVar1 & 0x40) == 0);
  do {
  } while ((uVar2 & 0x40) == 0);
  return _DAT_00000088 << 0x10 | _DAT_00000082;
}
