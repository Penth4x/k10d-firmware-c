/* @k10d clear_status_flag_bits_000cca22 @ 0x000cca22
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets a high bit in one global and clears specific low-order bits in several other
 *   global variables.
 * summary:
 *   The function writes 0x80 to DAT_0003ce24 and zeros DAT_0003ce03 and DAT_000000ee. It
 *   then performs bitwise AND operations with masks (0xf8, 0xf3, 0xfb, 0xdf) on
 *   DAT_0003ce04, DAT_0003ce06, DAT_0000005f, and DAT_000000d1 respectively, effectively
 *   clearing specific flag bits in these variables. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_status_flag_bits_000cca22(void)

{
  _DAT_0003ce24 = 0x80;
  DAT_0003ce03 = 0;
  DAT_0003ce04 = DAT_0003ce04 & 0xf8;
  DAT_0003ce06 = DAT_0003ce06 & 0xf3;
  DAT_0000005f = DAT_0000005f & 0xfb;
  DAT_000000d1 = DAT_000000d1 & 0xdf;
  DAT_000000ee = 0;
  return;
}
