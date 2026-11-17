/* @k10d clear_status_flag_bits_000e6514 @ 0x000e6514
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears specific bits in several global flag variables and resets a few to zero.
 * summary:
 *   The function performs a series of bitwise AND operations on global variables
 *   (DAT_0003c330, DAT_0003c41d, DAT_0003c086, DAT_0003c038, DAT_0003c4dd) to clear
 *   specific bits. It also unconditionally sets DAT_0003c06e and _DAT_0003c332 to 0.
 *   Conditionally, if bit 0 of DAT_0003c066 is clear, it sets DAT_0003c02f to 0. No MMIO
 *   writes or function calls are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_status_flag_bits_000e6514(void)

{
  if ((DAT_0003c066 & 1) == 0) {
    DAT_0003c02f = 0;
  }
  DAT_0003c330 = DAT_0003c330 & 0x88;
  DAT_0003c06e = 0;
  DAT_0003c41d = DAT_0003c41d & 0xfc;
  DAT_0003c086 = DAT_0003c086 & 0xfe;
  _DAT_0003c332 = 0;
  DAT_0003c038 = DAT_0003c038 & 99;
  DAT_0003c4dd = DAT_0003c4dd & 0xfb;
  return;
}
