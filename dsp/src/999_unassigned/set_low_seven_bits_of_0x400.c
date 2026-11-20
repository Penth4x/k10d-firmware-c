/* @k10d set_low_seven_bits_of_0x400 @ 0x000dad08
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets the lower seven bits of the global variable at 0x400.
 * summary:
 *   The function performs a bitwise OR operation on the global variable DAT_00000400 with
 *   the constant 0x7f. This action sets bits 0 through 6 of the variable while leaving
 *   higher bits unchanged. No other memory locations are accessed and no functions are
 *   called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_low_seven_bits_of_0x400(void)

{
  DAT_00000400 = DAT_00000400 | 0x7f;
  return;
}
