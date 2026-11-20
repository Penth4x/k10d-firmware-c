/* @k10d set_bit_1_and_5_in_three_flags @ 0x000dda0e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bits 1 and 5 (0x42) in three consecutive 16-bit flag words at 0x126, 0x12e, and
 *   0x136.
 * summary:
 *   The function performs a bitwise OR of 0x42 with three global variables: DAT_00000126,
 *   DAT_0000012e, and DAT_00000136. It has no callees and no other side effects. The
 *   specific meaning of these flags is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_1_and_5_in_three_flags(void)

{
  DAT_00000126 = DAT_00000126 | 0x42;
  DAT_0000012e = DAT_0000012e | 0x42;
  DAT_00000136 = DAT_00000136 | 0x42;
  return;
}
