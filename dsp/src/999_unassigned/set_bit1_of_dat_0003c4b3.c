/* @k10d set_bit1_of_dat_0003c4b3 @ 0x000f60ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally sets bit 1 of the global DAT_0003c4b3 based on several other global flag
 *   bits.
 * summary:
 *   The function reads multiple 1-bit and multi-bit flags from globals in the
 *   0x0003c000-0x0003c500 range. Depending on the combination of these flags, it ORs the
 *   value 2 into DAT_0003c4b3. It has no callees and performs no memory writes other than
 *   to DAT_0003c4b3. The specific meaning of the flags and the target global is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit1_of_dat_0003c4b3(void)

{
  if (((DAT_0003c58b & 0x10) == 0) || ((DAT_0003c198 & 1) == 0)) {
    if ((DAT_0003c198 & 1) == 0) {
      if ((((DAT_0003c58c & 1) != 0) && ((DAT_0003c4de & 1) == 0)) && ((DAT_0003c028 & 4) != 0)) {
        DAT_0003c4b3 = DAT_0003c4b3 | 2;
      }
    }
    else {
      DAT_0003c4b3 = DAT_0003c4b3 | 2;
    }
  }
  else if ((DAT_0003c028 & 1) != 0) {
    DAT_0003c4b3 = DAT_0003c4b3 | 2;
  }
  return;
}
