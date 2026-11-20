/* @k10d set_bits_4_and_5_of_global_000e36dc @ 0x000e36dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bits 4 and 5 of the global variable at DAT_00000006.
 * summary:
 *   The function performs a bitwise OR operation on the global variable DAT_00000006 with
 *   the constant 0x30. This operation sets bit 4 and bit 5 of the variable while leaving
 *   other bits unchanged. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bits_4_and_5_of_global_000e36dc(void)

{
  DAT_00000006 = DAT_00000006 | 0x30;
  return;
}
