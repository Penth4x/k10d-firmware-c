/* @k10d clear_multiple_status_flags @ 0x000e7434
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears specific bits in several global byte variables and sets bits in two others.
 * summary:
 *   The function performs a series of bitwise AND and OR operations on global variables at
 *   addresses 0x0003c020 through 0x0003f55e. It clears specific bits (e.g., bit 6 in
 *   0x0003c020, bit 0 in 0x0003c1eb) and sets bits (e.g., bits 2 and 3 in 0x0003c066). No
 *   callees are invoked, and the specific meaning of these flags is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_multiple_status_flags(void)

{
  DAT_0003c020 = DAT_0003c020 & 0xbf;
  _DAT_0003c022 = 0;
  DAT_0003c067 = DAT_0003c067 & 0x7f;
  DAT_0003c02b = DAT_0003c02b & 0xbf;
  DAT_0003c1eb = DAT_0003c1eb & 0xfe;
  DAT_0003c066 = DAT_0003c066 | 0xc;
  DAT_0003c410 = DAT_0003c410 | 0xc;
  DAT_0003c038 = DAT_0003c038 & 0xdc;
  DAT_0003c05d = DAT_0003c05d & 0xde;
  DAT_0003c07e = DAT_0003c07e & 0xbf;
  DAT_0003f55e = DAT_0003f55e & 0xf7;
  return;
}
