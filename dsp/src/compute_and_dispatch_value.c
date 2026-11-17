/* @k10d compute_and_dispatch_value @ 0x000f50d6
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Computes a short value from DAT_0003c48d and a branch on DAT_0003c3ac, then passes it
 *   to clamp_value_to_range_000d9ac0.
 * summary:
 *   Reads DAT_0003c48d and branches on DAT_0003c3ac. In one path it calls
 *   divide_two_integers with (0x42 - DAT_0003c48d, 4) and subtracts 9; in the other it
 *   calls divide_two_integers with (0x40 - DAT_0003c48d, 8), multiplies by 3, adds a byte
 *   from a table at DAT_000fc8f0 indexed by (DAT_0003c48d + 0x40) & 7, and subtracts 0x11.
 *   The resulting short is passed as the first argument to clamp_value_to_range_000d9ac0
 *   with second and third arguments 0 and 0xe. The roles of the DAT globals and the two
 *   callees are not established.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_dispatch_value(void)

{
  short sVar2;
  uint32_t uVar1;
  
  if (DAT_0003c3ac == '\0') {
    sVar2 = divide_two_integers(0x42 - DAT_0003c48d,4);
    sVar2 = sVar2 + -9;
  }
  else {
    sVar2 = divide_two_integers(0x40 - DAT_0003c48d,8);
    sVar2 = sVar2 * 3 + (ushort)(byte)(&DAT_000fc8f0)[(int)DAT_0003c48d + 0x40U & 7] + -0x11;
  }
  uVar1 = clamp_value_to_range_000d9ac0((int)sVar2,0,0xe);
  return uVar1;
}
