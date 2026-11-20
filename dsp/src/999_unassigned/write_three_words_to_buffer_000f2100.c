/* @k10d write_three_words_to_buffer_000f2100 @ 0x000f2100
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes three 16-bit constants from a source table into a destination buffer at fixed
 *   offsets.
 * summary:
 *   The function doubles the input pointer and writes three undefined2 values from
 *   DAT_0003c814, DAT_0003c816, and DAT_0003c818 to offsets 0x3d000, 0x3d400, and 0x3d800
 *   relative to the scaled pointer. No callees are invoked. The role of the destination
 *   buffer and the constants is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_three_words_to_buffer_000f2100(int param_1)

{
  param_1 = param_1 * 2;
  *(uint16_t *)(param_1 + 0x3d000) = _DAT_0003c814;
  *(uint16_t *)(param_1 + 0x3d400) = _DAT_0003c816;
  *(uint16_t *)(param_1 + 0x3d800) = _DAT_0003c818;
  return;
}
