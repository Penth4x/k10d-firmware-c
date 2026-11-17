/* @k10d clear_flag_bits_in_globals_000e5f86 @ 0x000e5f86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears specific bits in several global byte variables and zeroes a small block of
 *   related globals.
 * summary:
 *   The function performs bitwise AND/OR operations on DAT_00000503, DAT_00000003,
 *   DAT_00000403, DAT_000000b5, DAT_000000b9, and DAT_0003c021 to modify specific flag
 *   bits. It then sets DAT_0003c043, DAT_0003c044, DAT_0003c04e, DAT_0003c04f,
 *   DAT_000000b4, DAT_000000b7, DAT_000000b8, and DAT_000000bb to zero. No callees are
 *   invoked, and the role of these specific global variables is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_bits_in_globals_000e5f86(void)

{
  DAT_00000503 = DAT_00000503 & 0x93;
  DAT_00000003 = DAT_00000003 & 0x93;
  DAT_00000403 = DAT_00000403 | 0x6c;
  DAT_000000b5 = DAT_000000b5 & 0xf7;
  DAT_000000b9 = DAT_000000b9 & 0xf7;
  DAT_0003c021 = DAT_0003c021 & 0xdf;
  DAT_0003c043 = 0;
  DAT_0003c044 = 0;
  DAT_0003c04e = 0;
  DAT_0003c04f = 0;
  DAT_000000b4 = 0;
  DAT_000000b7 = 0;
  DAT_000000b8 = 0;
  DAT_000000bb = 0;
  return;
}
