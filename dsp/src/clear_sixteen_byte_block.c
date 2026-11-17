/* @k10d clear_sixteen_byte_block @ 0x000e9036
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets sixteen consecutive bytes at 0x9c-0xab to zero.
 * summary:
 *   The function performs a simple memset-like operation on a 16-byte region in low memory
 *   (0x9c-0xab). It has no arguments and no return value. No callees are invoked, and the
 *   specific role of this memory block is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_sixteen_byte_block(void)

{
  DAT_0000009c = 0;
  DAT_0000009d = 0;
  DAT_0000009e = 0;
  DAT_0000009f = 0;
  DAT_000000a0 = 0;
  DAT_000000a1 = 0;
  DAT_000000a2 = 0;
  DAT_000000a3 = 0;
  DAT_000000a4 = 0;
  DAT_000000a5 = 0;
  DAT_000000a6 = 0;
  DAT_000000a7 = 0;
  DAT_000000a8 = 0;
  DAT_000000a9 = 0;
  DAT_000000aa = 0;
  DAT_000000ab = 0;
  return;
}
