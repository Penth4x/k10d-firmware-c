/* @k10d fill_sixteen_bytes_with_0xf @ 0x000e915c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes the value 0xf to sixteen consecutive bytes starting at DAT_0000009c.
 * summary:
 *   The function performs a simple store loop, setting DAT_0000009c through DAT_000000ab
 *   each to 0xf. It has no parameters, no return value, and no callees. The role of the
 *   DAT_0000009c..DAT_000000ab region is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_sixteen_bytes_with_0xf(void)

{
  DAT_0000009c = 0xf;
  DAT_0000009d = 0xf;
  DAT_0000009e = 0xf;
  DAT_0000009f = 0xf;
  DAT_000000a0 = 0xf;
  DAT_000000a1 = 0xf;
  DAT_000000a2 = 0xf;
  DAT_000000a3 = 0xf;
  DAT_000000a4 = 0xf;
  DAT_000000a5 = 0xf;
  DAT_000000a6 = 0xf;
  DAT_000000a7 = 0xf;
  DAT_000000a8 = 0xf;
  DAT_000000a9 = 0xf;
  DAT_000000aa = 0xf;
  DAT_000000ab = 0xf;
  return;
}
