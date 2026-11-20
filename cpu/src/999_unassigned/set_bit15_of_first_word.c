/* @k10d set_bit15_of_first_word @ 0x1045453e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets or clears bit 15 of the 16-bit word pointed to by the first argument based on the
 *   second argument.
 * summary:
 *   Reads the 16-bit value at the address stored in param_1. If param_2 is non-zero, it
 *   sets bit 15 (0x8000) of that value; otherwise, it clears bit 15. The modified value is
 *   written back to the same location. No other bits are modified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit15_of_first_word(uint32_t *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)*param_1 & 0x80;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x8000;
  }
  *(ushort *)*param_1 = uVar1;
  return;
}
