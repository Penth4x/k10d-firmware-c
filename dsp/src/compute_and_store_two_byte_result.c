/* @k10d compute_and_store_two_byte_result @ 0x000c65ac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes a value via two helper calls, sets bits in a flag word based on status bits,
 *   and stores the results in two adjacent bytes.
 * summary:
 *   The function selects an input value (0xa4 or DAT_0003c571) based on bit 0 of
 *   DAT_0003c58b. It passes this to clamp_value_with_offset, then the result to
 *   FUN_000c66b0. Depending on bits 2 and 3 of DAT_0003c58a, it sets bit 6 or 7 of
 *   DAT_0003c4d7 and calls clamp_value_and_set_flags_000c6682 with the intermediate results
 *   and constant 0x1c. Finally, it stores the low bytes of the last two return values into
 *   DAT_0003c565 and DAT_0003c564.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_store_two_byte_result(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint8_t uVar3;
  
  uVar3 = DAT_0003c571;
  if ((DAT_0003c58b & 1) == 0) {
    uVar3 = 0xa4;
  }
  uVar1 = clamp_value_with_offset(uVar3);
  uVar2 = FUN_000c66b0(uVar1);
  if ((DAT_0003c58a & 4) == 0) {
    if ((DAT_0003c58a & 8) != 0) {
      DAT_0003c4d7 = DAT_0003c4d7 | 0x40;
      uVar1 = clamp_value_and_set_flags_000c6682(uVar2,0x1c,uVar3);
    }
  }
  else {
    DAT_0003c4d7 = DAT_0003c4d7 | 0x80;
    uVar1 = clamp_value_and_set_flags_000c6682(uVar2,0x1c,uVar3);
  }
  DAT_0003c565 = (char)uVar2;
  DAT_0003c564 = (char)uVar1;
  return;
}
