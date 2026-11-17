/* @k10d clamp_and_flag_range_limits @ 0x000dc68e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Compares limit values against scaled thresholds, updates the limits, and sets
 *   corresponding bits in a status word.
 * summary:
 *   The function performs six comparisons between values at 0x0003f380-0x0003f386 (scaled
 *   by 0x100) and limit values at 0x0003c830, 0x0003c834, and 0x0003c880. When a limit is
 *   outside the scaled range, it updates the limit to the scaled value and sets a specific
 *   bit (1, 2, 4, or 8) in the status word at 0x0003c805. No callees are invoked; the
 *   function only reads and writes to these global variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_and_flag_range_limits(void)

{
  if (_DAT_0003f382 * 0x100 < _DAT_0003c830) {
    DAT_0003c805 = DAT_0003c805 | 2;
    _DAT_0003c830 = _DAT_0003f382 * 0x100;
  }
  if (_DAT_0003c830 < _DAT_0003f380 * 0x100) {
    DAT_0003c805 = DAT_0003c805 | 1;
    _DAT_0003c830 = _DAT_0003f380 * 0x100;
  }
  if (_DAT_0003f386 * 0x100 < _DAT_0003c834) {
    DAT_0003c805 = DAT_0003c805 | 8;
    _DAT_0003c834 = _DAT_0003f386 * 0x100;
  }
  if (_DAT_0003c834 < _DAT_0003f384 * 0x100) {
    DAT_0003c805 = DAT_0003c805 | 4;
    _DAT_0003c834 = _DAT_0003f384 * 0x100;
  }
  if (_DAT_0003f386 * 0x100 < _DAT_0003c880) {
    DAT_0003c805 = DAT_0003c805 | 8;
    _DAT_0003c880 = _DAT_0003f386 * 0x100;
  }
  if (_DAT_0003c880 < _DAT_0003f384 * 0x100) {
    DAT_0003c805 = DAT_0003c805 | 4;
    _DAT_0003c880 = _DAT_0003f384 * 0x100;
  }
  return;
}
