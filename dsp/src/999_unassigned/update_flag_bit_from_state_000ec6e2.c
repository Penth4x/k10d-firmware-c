/* @k10d update_flag_bit_from_state_000ec6e2 @ 0x000ec6e2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 3 of DAT_0003c1eb and conditionally sets it based on values in DAT_0003c46d
 *   and DAT_0003c58b.
 * summary:
 *   The function first clears bit 3 (mask 0x08) of the global variable DAT_0003c1eb. It
 *   then checks if DAT_0003c46d is 1, 3, or 9, and if DAT_0003c58b has bit 6 set OR (bit 1
 *   set AND bit 3 clear). If these conditions are met, it sets bit 3 of DAT_0003c1eb. No
 *   other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bit_from_state_000ec6e2(void)

{
  DAT_0003c1eb = DAT_0003c1eb & 0xf7;
  if ((((DAT_0003c46d == '\x01') || (DAT_0003c46d == '\x03')) || (DAT_0003c46d == '\t')) &&
     (((DAT_0003c58b & 0x40) != 0 || (((DAT_0003c58b & 2) != 0 && ((DAT_0003c58b & 8) == 0)))))) {
    DAT_0003c1eb = DAT_0003c1eb | 8;
  }
  return;
}
