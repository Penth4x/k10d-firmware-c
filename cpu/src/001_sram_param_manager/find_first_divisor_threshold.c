/* @k10d find_first_divisor_threshold @ 0x100f1724
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Finds the smallest index where a shifted 0x2000 value divided by 66000 exceeds 999,
 *   then passes that index to a callee.
 * summary:
 *   The function iterates uVar1 from 0 to 15, computing (0x2000 << (uVar1 & 0xf)) / 66000
 *   and checking if the result is greater than 999. It stores the first matching index in
 *   uVar2 and calls set_low_nibble_of_byte with that value. The specific meaning of the
 *   constant 66000 and the callee's role are not determinable from the provided pseudocode
 *   and brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void find_first_divisor_threshold(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (999 < (uint)(0x2000 << ((byte)uVar1 & 0xf)) / 66000) {
      uVar2 = uVar1 & 0xff;
      break;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0xf);
  set_low_nibble_of_byte(uVar2);
  return;
}
