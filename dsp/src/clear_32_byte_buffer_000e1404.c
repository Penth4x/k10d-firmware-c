/* @k10d clear_32_byte_buffer_000e1404 @ 0x000e1404
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Zeroes out a 32-byte region starting at DAT_0003c140.
 * summary:
 *   The function iterates 32 times, writing 0 to each byte of the memory block beginning at
 *   DAT_0003c140. It uses a 16-bit counter initialized to 0x20. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_32_byte_buffer_000e1404(void)

{
  uint uVar1;
  
  uVar1 = 0x20;
  do {
    uVar1 = uVar1 - 1 & 0xffff;
    (&DAT_0003c140)[uVar1] = 0;
  } while (uVar1 != 0);
  return;
}
