/* @k10d clamp_and_load_table_value @ 0x000d9c74
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clamps a value from compute_clamped_offset_value_000d8a3a to the range [1, 0x60] and
 *   loads a 16-bit entry from a table into _DAT_0003c6ee.
 * summary:
 *   Sets DAT_0003c19f to 1, calls compute_clamped_offset_value_000d8a3a(1), and adjusts the
 *   result by adding 0x5e if it is >= 2. The result is clamped to [1, 0x60]. It then
 *   indexes a table at &DAT_000fbf8e using the clamped value to load a 16-bit value into
 *   _DAT_0003c6ee. Finally, it sets DAT_0000013a to 0xc0, DAT_0000013c to 0x2f, and clears
 *   DAT_0003c19f.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_and_load_table_value(void)

{
  DAT_0003c19f = 1;
  _DAT_0003c6f0 = compute_clamped_offset_value_000d8a3a(1);
  if ((short)(_DAT_0003c6f0 + 0x60) < 2) {
    _DAT_0003c6f0 = 0;
  }
  else {
    _DAT_0003c6f0 = _DAT_0003c6f0 + 0x5e;
  }
  if (_DAT_0003c6f0 < 1) {
    _DAT_0003c6f0 = 0;
  }
  if (0x5f < _DAT_0003c6f0) {
    _DAT_0003c6f0 = 0x60;
  }
  DAT_0000013a = 0xc0;
  DAT_0000013c = 0x2f;
  _DAT_0003c6ee = *(uint16_t *)(&DAT_000fbf8e + _DAT_0003c6f0 * 2);
  DAT_0003c19f = 0;
  return;
}
