/* @k10d compute_and_dispatch_adjusted_value @ 0x000ccc9c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Calculates a 16-bit value from global state flags and passes it to a downstream
 *   handler.
 * summary:
 *   The function evaluates multiple global flags to determine if a value should be
 *   computed. If conditions are met, it derives a value from DAT_0003f2c6 and DAT_0003c107,
 *   optionally adjusts it via scale_by_fixed_point, and calls
 *   process_state_transition_000ccbc6 with the result. It also handles a specific
 *   initialization path involving update_state_counters and FUN_000cc5a8 when certain bit
 *   flags are set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_and_dispatch_adjusted_value(void)

{
  int iVar1;
  
  if (((((DAT_0003f2c6 == 0) || ((DAT_0003ce08 & 1) != 0)) || ((DAT_0003ce01 & 8) == 0)) ||
      (_DAT_0003cef4 != 0)) || (((DAT_0003c114 & 8) == 0 && (-1 < (char)DAT_0003f2c6)))) {
    if (((DAT_0003c114 & 8) == 0) && (-1 < (char)DAT_0003f2c6)) {
      _DAT_0003cef4 = 0;
    }
  }
  else {
    if (((DAT_0003c128 & 0x40) == 0) && ((DAT_0003ce01 & 1) != 0)) {
      if ((DAT_0003ce05 & 1) == 0) {
        if ((DAT_0003ce03 & 4) == 0) {
          _DAT_0003cc6a = (ushort)DAT_0003ce20;
          DAT_0000005e = 0x92;
          DAT_000000d2 = DAT_000000d2 | 0xc;
          DAT_0000005f = DAT_0000005f | 1;
          _DAT_00000058 = 0xffff;
          iVar1 = update_state_counters();
          if (iVar1 == 0) {
            FUN_000cc5a8();
          }
          FUN_000cc938();
        }
        do {
          if ((DAT_0003ce01 & 1) == 0) break;
        } while ((DAT_0000005f & 4) == 0);
      }
      clear_bit1_of_dat_0003ce01();
    }
    _DAT_0003ce2c = DAT_0003f2c6 & 0x3f;
    _DAT_0003cef4 = _DAT_0003ce2c;
    if ((DAT_0003f2c6 & 0x40) == 0) {
      _DAT_0003cef4 =
           (short)((int)((DAT_0003c107 & 0xf) << 2) >> (DAT_0003f2c7 & 0x1f)) +
           (ushort)(DAT_0003c107 >> 6) * -4;
      if ((short)_DAT_0003cef4 < 0) {
        _DAT_0003cef4 = 0;
      }
      _DAT_0003ce2c = _DAT_0003ce2c + _DAT_0003cef4;
    }
    if (_DAT_0003f2c8 != 0) {
      _DAT_0003ce2c = scale_by_fixed_point(_DAT_0003ce2c);
    }
    process_state_transition_000ccbc6(_DAT_0003ce2c);
  }
  return;
}
