/* @k10d check_two_flag_bits_000c5838 @ 0x000c5838
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns 1 or 0 based on the state of bit 1 in DAT_0003c396 and bit 7 in DAT_0003c4d2.
 * summary:
 *   The function ignores its input argument if DAT_0003c396 has bit 1 set, returning the
 *   original value. If bit 1 is clear, it returns 1 if bit 7 of DAT_0003c4d2 is clear, or 0
 *   if bit 7 is set. No callees are invoked, and the specific roles of the two global
 *   variables are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_flag_bits_000c5838(uint32_t param_1)

{
  if ((DAT_0003c396 & 2) == 0) {
    if ((DAT_0003c4d2 & 0x80) == 0) {
      param_1 = 1;
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}
