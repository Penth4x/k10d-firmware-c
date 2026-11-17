/* @k10d clamp_index_and_return_table_byte @ 0x000d1140
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clamps an input index to the range 0-15 and returns the byte at that offset in a
 *   16-byte table.
 * summary:
 *   The function adds 3 to the input parameter, clamps the result to the range [0, 15], and
 *   uses it as an index into the 16-byte table at DAT_000fb084. It returns the single byte
 *   at that position. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t clamp_index_and_return_table_byte(int param_1)

{
  param_1 = param_1 + 3;
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (0xe < param_1) {
    param_1 = 0xf;
  }
  return (&DAT_000fb084)[param_1];
}
