/* @k10d clear_bits_and_shift_global @ 0x000cc7c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears specific bits in a global variable and shifts another global into a ushort
 *   field.
 * summary:
 *   The function performs two simple memory operations: it masks DAT_0003ce04 with 0x9f
 *   (clearing bits 5 and 6) and assigns the upper byte of DAT_0003f4a3 to _DAT_0003ce26. No
 *   other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_bits_and_shift_global(void)

{
  DAT_0003ce04 = DAT_0003ce04 & 0x9f;
  _DAT_0003ce26 = (ushort)DAT_0003f4a3 << 8;
  return;
}
