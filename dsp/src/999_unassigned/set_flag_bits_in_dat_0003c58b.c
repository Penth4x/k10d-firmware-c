/* @k10d set_flag_bits_in_dat_0003c58b @ 0x000c372e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 7 of DAT_0003c58b and conditionally sets bit 3 when param_1 is zero.
 * summary:
 *   The function modifies the global variable DAT_0003c58b by first ORing bit 3 (value 8)
 *   if param_1 is 0. It then clears all bits except bit 7 and bit 3 (mask 0xbe) and sets
 *   bit 7 (value 0x80). No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bits_in_dat_0003c58b(int param_1)

{
  if (param_1 == 0) {
    DAT_0003c58b = DAT_0003c58b | 8;
  }
  DAT_0003c58b = DAT_0003c58b & 0xbe | 0x80;
  return;
}
