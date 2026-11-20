/* @k10d compute_index_from_code @ 0x000d5d18
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calculates a value based on param_1 and stores it in two global variables.
 * summary:
 *   The function takes an integer parameter and computes a result using a switch-like
 *   logic. For specific values (0x60, 0x62, 0x67), it performs arithmetic on _DAT_0003c328.
 *   For other values, it uses param_1 as an index into a byte array at 0x000fb40c. The
 *   result is clamped to 0 if it exceeds 0xfe, then stored in _DAT_0003c314 and
 *   _DAT_0003c280.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_index_from_code(int param_1)

{
  if (param_1 == 0x60) {
    _DAT_0003c314 = _DAT_0003c328 + 6;
  }
  else if (param_1 == 0x62) {
    _DAT_0003c314 = (uint)_DAT_0003c328 * 2 + 4;
  }
  else if (param_1 == 0x67) {
    _DAT_0003c314 = _DAT_0003c328 + 4;
  }
  else {
    _DAT_0003c314 = (uint)(byte)(&DAT_000fb40c)[param_1];
  }
  if (0xfe < _DAT_0003c314) {
    _DAT_0003c314 = 0;
  }
  _DAT_0003c280 = _DAT_0003c314;
  return;
}
