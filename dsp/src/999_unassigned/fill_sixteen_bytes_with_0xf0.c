/* @k10d fill_sixteen_bytes_with_0xf0 @ 0x000e90fa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes the constant 0xf0 to sixteen consecutive bytes starting at DAT_0000009c.
 * summary:
 *   The function performs a simple store loop, setting DAT_0000009c through DAT_000000ab to
 *   0xf0. It has no parameters, no return value, and no callees. The role of the
 *   DAT_0000009c block is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_sixteen_bytes_with_0xf0(void)

{
  DAT_0000009c = 0xf0;
  DAT_0000009d = 0xf0;
  DAT_0000009e = 0xf0;
  DAT_0000009f = 0xf0;
  DAT_000000a0 = 0xf0;
  DAT_000000a1 = 0xf0;
  DAT_000000a2 = 0xf0;
  DAT_000000a3 = 0xf0;
  DAT_000000a4 = 0xf0;
  DAT_000000a5 = 0xf0;
  DAT_000000a6 = 0xf0;
  DAT_000000a7 = 0xf0;
  DAT_000000a8 = 0xf0;
  DAT_000000a9 = 0xf0;
  DAT_000000aa = 0xf0;
  DAT_000000ab = 0xf0;
  return;
}
