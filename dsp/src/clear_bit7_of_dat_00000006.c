/* @k10d clear_bit7_of_dat_00000006 @ 0x000e3a60
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 7 of the global variable DAT_00000006.
 * summary:
 *   The function performs a bitwise AND of the global DAT_00000006 with the mask 0x7f,
 *   effectively clearing bit 7 while preserving all other bits. It has no callees and no
 *   other side effects. The role of DAT_00000006 is not determinable from the provided
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit7_of_dat_00000006(void)

{
  DAT_00000006 = DAT_00000006 & 0x7f;
  return;
}
