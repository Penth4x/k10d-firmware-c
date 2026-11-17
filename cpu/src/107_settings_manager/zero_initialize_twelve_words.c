/* @k10d zero_initialize_twelve_words @ 0x104280c8
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes a 48-byte (12-word) buffer, allocating it from the heap if the passed pointer is
 *   NULL.
 * summary:
 *   If param_1 is non-zero it is used as the buffer base; otherwise heap_alloc(1) is called
 *   and its result used (the allocation is effectively a 1-byte placeholder, but the code
 *   then writes 48 bytes past it). A loop clears 12 consecutive 32-bit words (offsets
 *   0..0x2c) and then clears one additional word at offset 0x30. No other callees or MMIO
 *   writes are present, so the buffer's role is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_initialize_twelve_words(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != 0) || (iVar3 = heap_alloc((void *)1), iVar3 != 0)) {
    iVar2 = 0xd;
    iVar3 = 0;
    do {
      iVar1 = iVar3;
      *(uint32_t *)(iVar1 + -0x7ffe21d8) = 0;
      *(uint32_t *)(iVar1 + -0x7ffe21d4) = 0;
      *(uint32_t *)(iVar1 + -0x7ffe21d0) = 0;
      iVar2 = iVar2 + -1;
      iVar3 = iVar1 + 0xc;
    } while (-1 < iVar2);
    *(uint32_t *)(iVar1 + -0x7ffe21cc) = 0;
  }
  return;
}
