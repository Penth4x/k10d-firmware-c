/* @k10d shift_two_globals_left_eight @ 0x000dc8e6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Left-shifts two 16-bit globals by 8 bits and stores the results into two other globals.
 * summary:
 *   The function reads _DAT_0003c814 and _DAT_0003c816, casts them to int, shifts each left
 *   by 8 bits, and writes the results to _DAT_0003c828 and _DAT_0003c82c respectively. No
 *   MMIO, no callees, no branching. The role of these specific globals is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shift_two_globals_left_eight(void)

{
  _DAT_0003c828 = (int)_DAT_0003c814 << 8;
  _DAT_0003c82c = (int)_DAT_0003c816 << 8;
  return;
}
