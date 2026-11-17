/* @k10d dispatch_on_bit_flag @ 0x000ce622
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Selects one of two data pointers and a count based on a bit in DAT_0003c022, then calls
 *   zero_memory_bytes.
 * summary:
 *   Checks bit 0 of DAT_0003c022. If clear, passes 9 and &DAT_0003ce00 to
 *   zero_memory_bytes; otherwise passes 6 and &DAT_0003ce03. No other side effects are
 *   visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_bit_flag(void)

{
  uint32_t uVar1;
  uint8_t *puVar2;
  
  if ((DAT_0003c022 & 1) == 0) {
    uVar1 = 9;
    puVar2 = (uint8_t *)&DAT_0003ce00;
  }
  else {
    uVar1 = 6;
    puVar2 = (uint8_t *)&DAT_0003ce03;
  }
  zero_memory_bytes(uVar1,puVar2);
  return;
}
