/* @k10d map_global_value_to_char @ 0x000c49d2
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Returns a character derived from a global value via a lookup table or fixed fallbacks.
 * summary:
 *   The function reads the global DAT_0003c564 and compares it against 0xa4. If the value
 *   is below 0xa4 and within a 0x29 range, it indexes into the string at 0x000f9c88;
 *   otherwise it uses a space or a 0x01 placeholder. The result is offset by DAT_000f9df0
 *   and 0x0f before being returned. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char map_global_value_to_char(void)

{
  char cVar1;
  
  if (DAT_0003c564 < 0xa4) {
    if (-(uint)DAT_0003c564 + 0xa4 < 0x29) {
      cVar1 = s_0000000000000000_000f9c88[-(uint)DAT_0003c564 + 0x1c];
    }
    else {
      cVar1 = ' ';
    }
  }
  else {
    cVar1 = '\x01';
  }
  return cVar1 + DAT_000f9df0 + '\x0f';
}
