/* @k10d clear_and_set_flag_bits_000e00cc @ 0x000e00cc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears specific bits in two memory locations and sets bits in a third.
 * summary:
 *   The function performs bitwise operations on three global variables. It clears bits 0x90
 *   from DAT_00000003 and DAT_00000503, and sets bits 0x90 in DAT_00000403. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_and_set_flag_bits_000e00cc(void)

{
  DAT_00000003 = DAT_00000003 & 0x6f;
  DAT_00000403 = DAT_00000403 | 0x90;
  DAT_00000503 = DAT_00000503 & 0x6f;
  return;
}
