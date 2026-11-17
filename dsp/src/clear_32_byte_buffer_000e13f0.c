/* @k10d clear_32_byte_buffer_000e13f0 @ 0x000e13f0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Zeroes out 32 consecutive bytes starting at DAT_0003c100.
 * summary:
 *   The function iterates 32 times, decrementing a 16-bit counter and writing 0 to each
 *   byte of the buffer at DAT_0003c100. It has no callees and no other side effects. The
 *   role of the buffer at DAT_0003c100 is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_32_byte_buffer_000e13f0(void)

{
  uint uVar1;
  
  uVar1 = 0x20;
  do {
    uVar1 = uVar1 - 1 & 0xffff;
    (&DAT_0003c100)[uVar1] = 0;
  } while (uVar1 != 0);
  return;
}
