/* @k10d write_three_halfwords_to_buffer @ 0x000df092
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes three 16-bit constants from a global table into a caller-provided buffer at
 *   fixed offsets.
 * summary:
 *   The function takes a pointer in param_1, doubles it to get a byte address, and stores
 *   three 16-bit values (_DAT_0003c81a, _DAT_0003c81c, _DAT_0003c81e) at offsets 0x3dc00,
 *   0x3e000, and 0x3e400 relative to that base. There are no callees, and the role of the
 *   target buffer or the constants is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_three_halfwords_to_buffer(int param_1)

{
  param_1 = param_1 * 2;
  *(uint16_t *)(param_1 + 0x3dc00) = _DAT_0003c81a;
  *(uint16_t *)(param_1 + 0x3e000) = _DAT_0003c81c;
  *(uint16_t *)(param_1 + 0x3e400) = _DAT_0003c81e;
  return;
}
