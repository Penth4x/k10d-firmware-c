/* @k10d write_three_words_to_struct @ 0x000f213c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes three 16-bit constants from a global table into a struct at offsets 0x3dc00,
 *   0x3e000, and 0x3e400.
 * summary:
 *   The function takes a pointer (param_1), doubles it to compute a base address, and
 *   stores three specific 16-bit values (_DAT_0003c81a, _DAT_0003c81c, _DAT_0003c81e) at
 *   fixed offsets within that structure. It has no callees and performs no other side
 *   effects. The role of the target structure and the meaning of the stored constants are
 *   not determinable from the provided code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_three_words_to_struct(int param_1)

{
  param_1 = param_1 * 2;
  *(uint16_t *)(param_1 + 0x3dc00) = _DAT_0003c81a;
  *(uint16_t *)(param_1 + 0x3e000) = _DAT_0003c81c;
  *(uint16_t *)(param_1 + 0x3e400) = _DAT_0003c81e;
  return;
}
