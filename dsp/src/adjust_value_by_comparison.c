/* @k10d adjust_value_by_comparison @ 0x000ea6fc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects a byte from a comparison of two values and adjusts it based on a range check.
 * summary:
 *   The function checks if DAT_0003c1f4 equals 3. If so, it calls
 *   clear_bit1_of_dat_00000005, then selects a byte (bVar1) from DAT_0003f3d2,
 *   DAT_0003f3d5, or DAT_0003f3d4 based on comparisons between _DAT_0003c1fa and
 *   _DAT_0003f3d8/_DAT_0003f3d6. It stores this in _DAT_0003c1fc, then adds or subtracts
 *   DAT_0003f3c8 if _DAT_0003c056 is outside the range [_DAT_0003f24e - 0x10, _DAT_0003f24e
 *   + 0x30]. Finally, it sets DAT_0003c1fe to 4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_value_by_comparison(void)

{
  byte bVar1;
  
  if (DAT_0003c1f4 == '\x03') {
    clear_bit1_of_dat_00000005();
    bVar1 = DAT_0003f3d2;
    if (_DAT_0003c1fa < _DAT_0003f3d8) {
      bVar1 = DAT_0003f3d5;
    }
    if (_DAT_0003f3d6 < _DAT_0003c1fa) {
      bVar1 = DAT_0003f3d4;
    }
    _DAT_0003c1fc = (ushort)bVar1;
    if ((int)(uint)_DAT_0003c056 < (int)(_DAT_0003f24e - 0x10)) {
      _DAT_0003c1fc = _DAT_0003c1fc + DAT_0003f3c8;
    }
    if (_DAT_0003f24e + 0x30 < (uint)_DAT_0003c056) {
      _DAT_0003c1fc = _DAT_0003c1fc - DAT_0003f3c8;
    }
    DAT_0003c1fe = 4;
  }
  return;
}
