/* @k10d set_bits_4_and_5_of_global_000d7654 @ 0x000d7654
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bits 4 and 5 of the global variable at address 0x6.
 * summary:
 *   The function performs a bitwise OR operation on the global variable DAT_00000006 with
 *   the constant 0x30. This action sets bit 4 and bit 5 of the variable to 1 while leaving
 *   other bits unchanged. No other operations or side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bits_4_and_5_of_global_000d7654(void)

{
  DAT_00000006 = DAT_00000006 | 0x30;
  return;
}
