/* @k10d compute_state_offset_value @ 0x000cdc12
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Computes a 16-bit offset value into _DAT_0003ce2c based on state flags and a helper
 *   result.
 * summary:
 *   The function checks bit 6 of DAT_0003c128 and bit 3 of DAT_0003ce01 to determine which
 *   calculation path to take. It calls extract_and_pass_nibble and, if the result is 3,
 *   derives _DAT_0003ce2c from DAT_0003f2c0, DAT_0003c107, and _DAT_0003cef4, optionally
 *   passing it through scale_by_fixed_point. If the computed value is non-zero, it sets bit
 *   4 of DAT_0003ce01. The function always clears _DAT_0003cef4 before returning a status
 *   code (5 or 8).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_state_offset_value(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 5;
  if ((DAT_0003c128 & 0x40) == 0) {
    if ((DAT_0003ce01 & 8) != 0) {
      iVar1 = extract_and_pass_nibble();
      if (iVar1 == 3) {
        _DAT_0003ce2c = (ushort)DAT_0003f2c0;
        if ((DAT_0003f280 & 0x40) == 0) {
          if (_DAT_0003cef4 == 0) {
            _DAT_0003ce2c = (DAT_0003c107 & 0xf) * 4 + _DAT_0003ce2c;
          }
          else {
            _DAT_0003ce2c = (short)((int)(uint)_DAT_0003cef4 >> 1) + _DAT_0003ce2c;
          }
        }
        if (_DAT_0003f2c8 != 0) {
          _DAT_0003ce2c = scale_by_fixed_point(_DAT_0003ce2c);
        }
        if (_DAT_0003ce2c != 0) {
          DAT_0003ce01 = DAT_0003ce01 | 0x10;
        }
      }
      else if (iVar1 != 0) {
        iVar2 = 8;
      }
    }
    if (((_DAT_0003cef4 != 0) && (iVar2 == 5)) && ((DAT_0003ce01 & 0x10) == 0)) {
      _DAT_0003ce2c = (ushort)((int)(uint)_DAT_0003cef4 >> 1);
      if (_DAT_0003f2c8 != 0) {
        _DAT_0003ce2c = scale_by_fixed_point((int)(uint)_DAT_0003cef4 >> 1);
      }
      if (_DAT_0003ce2c != 0) {
        DAT_0003ce01 = DAT_0003ce01 | 0x10;
      }
    }
  }
  else {
    DAT_0003ce01 = DAT_0003ce01 & 0xf7;
    iVar2 = 5;
  }
  _DAT_0003cef4 = 0;
  return iVar2;
}
