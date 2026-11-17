/* @k10d store_four_bytes_to_dat_block @ 0x000d9ace
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes four byte parameters to a specific DAT memory region, optionally swapping with
 *   existing values first.
 * summary:
 *   The function takes four byte parameters and a short selector. If the selector is 2, it
 *   swaps the incoming bytes with the current values at DAT_0003c6e0 through DAT_0003c6eb.
 *   It then writes the four bytes to the same DAT addresses. No other side effects or MMIO
 *   operations are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_four_bytes_to_dat_block(uint8_t param_1,uint8_t param_2,uint8_t param_3,uint8_t param_4,
                 short param_5)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  
  uVar1 = param_3;
  uVar2 = param_2;
  uVar3 = param_1;
  uVar4 = param_4;
  if (param_5 == 2) {
    uVar1 = DAT_0003c6e0;
    DAT_0003c6e1 = param_3;
    uVar2 = DAT_0003c6e2;
    DAT_0003c6e3 = param_2;
    uVar3 = DAT_0003c6e6;
    DAT_0003c6e7 = param_1;
    uVar4 = DAT_0003c6ea;
    DAT_0003c6eb = param_4;
  }
  DAT_0003c6ea = uVar4;
  DAT_0003c6e6 = uVar3;
  DAT_0003c6e2 = uVar2;
  DAT_0003c6e0 = uVar1;
  return;
}
