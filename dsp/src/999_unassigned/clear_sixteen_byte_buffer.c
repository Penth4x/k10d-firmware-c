/* @k10d clear_sixteen_byte_buffer @ 0x000e9098
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets sixteen consecutive bytes at 0x9c-0xab to 0xff.
 * summary:
 *   The function writes the value 0xff to sixteen consecutive memory locations starting at
 *   0x9c. It has no arguments and no return value. The specific role of this memory region
 *   is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_sixteen_byte_buffer(void)

{
  DAT_0000009c = 0xff;
  DAT_0000009d = 0xff;
  DAT_0000009e = 0xff;
  DAT_0000009f = 0xff;
  DAT_000000a0 = 0xff;
  DAT_000000a1 = 0xff;
  DAT_000000a2 = 0xff;
  DAT_000000a3 = 0xff;
  DAT_000000a4 = 0xff;
  DAT_000000a5 = 0xff;
  DAT_000000a6 = 0xff;
  DAT_000000a7 = 0xff;
  DAT_000000a8 = 0xff;
  DAT_000000a9 = 0xff;
  DAT_000000aa = 0xff;
  DAT_000000ab = 0xff;
  return;
}
