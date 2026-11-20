/* @k10d sum_eight_values_shift_right @ 0x000e2d9c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls read_shifted_nibble_from_ram eight times with the same argument, sums the low 16
 *   bits of each result, and returns the sum shifted right by 3.
 * summary:
 *   The function initializes a 16-bit accumulator and a loop counter to 8. In each
 *   iteration it calls read_shifted_nibble_from_ram(param_1), adds the result to the
 *   accumulator (masked to 16 bits), and decrements the counter. After the loop, it returns
 *   the accumulator shifted right by 3 bits. The callee read_shifted_nibble_from_ram is not
 *   named, so the specific data being summed is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint sum_eight_values_shift_right(uint32_t param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  
  uVar3 = 0;
  sVar2 = 8;
  do {
    iVar1 = read_shifted_nibble_from_ram(param_1, __frv_reg_unset(5));
    uVar3 = uVar3 + iVar1 & 0xffff;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  return uVar3 >> 3;
}
