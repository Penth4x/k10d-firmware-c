/* @k10d compute_index_with_offset @ 0x000ccb70
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Computes a value in _DAT_0003ce2c from _DAT_0003f2c4 and _DAT_0003c107, optionally
 *   passing it through scale_by_fixed_point.
 * summary:
 *   Gated by bit 6 of DAT_0003ce03, it stores the low 6 bits of _DAT_0003f2c4 into
 *   _DAT_0003ce2c. If bit 6 of _DAT_0003f2c4 is clear, it adds 4 times the low nibble of
 *   _DAT_0003c107 (stored in _DAT_0003cef4). If _DAT_0003f2c8 is non-zero, the result is
 *   passed to scale_by_fixed_point and the return value replaces _DAT_0003ce2c. No MMIO or
 *   known subsystem registers are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_index_with_offset(void)

{
  if ((DAT_0003ce03 & 0x40) != 0) {
    _DAT_0003ce2c = DAT_0003f2c4 & 0x3f;
    if ((DAT_0003f2c4 & 0x40) == 0) {
      _DAT_0003cef4 = (DAT_0003c107 & 0xf) * 4;
      _DAT_0003ce2c = _DAT_0003ce2c + _DAT_0003cef4;
    }
    if (_DAT_0003f2c8 != 0) {
      _DAT_0003ce2c = scale_by_fixed_point(_DAT_0003ce2c);
    }
  }
  return;
}
