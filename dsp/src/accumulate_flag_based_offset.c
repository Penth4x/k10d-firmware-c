/* @k10d accumulate_flag_based_offset @ 0x000d542e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a 16-bit value by conditionally adding constants based on several global flag
 *   bits, storing the result to DAT_0003ccc4.
 * summary:
 *   The function reads multiple global flag bytes (DAT_0003ce01, DAT_0003cbd3,
 *   DAT_0003cbb7, DAT_0003ce06, DAT_0003cf0e, DAT_0003cfd0) and conditionally adds various
 *   constants (DAT_0003cd4c, DAT_0003f402, DAT_0003f421, DAT_0003f420, DAT_0003f1ba,
 *   DAT_0003f19b) to compute a final value. It writes the result to the global variable
 *   DAT_0003ccc4. The logic involves checking bit 5 of DAT_0003ce01, the lower 4 bits of
 *   DAT_0003cbd3, and several other status bits to determine which offsets to apply,
 *   including a loop that adds DAT_0003f19b multiple times based on the mode value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_flag_based_offset(void)

{
  uint uVar1;
  
  if ((((DAT_0003ce01 & 0x20) == 0) || ((DAT_0003cbd3 & 0xf) < 2)) || ((DAT_0003cbd3 & 0x10) == 0))
  {
    _DAT_0003ccc4 = (ushort)DAT_0003cd4c;
    if ((DAT_0003cbb7 & 0x10) != 0) {
      _DAT_0003ccc4 = _DAT_0003ccc4 + _DAT_0003f402;
    }
    if ((DAT_0003ce06 & 8) == 0) {
      if ((DAT_0003cbb7 & 0x20) != 0) {
        _DAT_0003ccc4 = _DAT_0003ccc4 + DAT_0003f421;
      }
    }
    else {
      _DAT_0003ccc4 = _DAT_0003ccc4 + DAT_0003f420;
    }
    uVar1 = DAT_0003cbd3 & 0xf;
    if (2 < uVar1) {
      _DAT_0003ccc4 = _DAT_0003ccc4 + DAT_0003f1ba;
    }
    if ((DAT_0003cf0e & 0x80) == 0) {
      if ((DAT_0003cf0e & 0x40) == 0) {
        if (((DAT_0003cfd0 & 1) != 0) && ((DAT_0003cbd3 & 0xf) != 0)) {
          if (2 < uVar1) {
            uVar1 = uVar1 - 1;
          }
          do {
            _DAT_0003ccc4 = _DAT_0003ccc4 + DAT_0003f19b;
            uVar1 = uVar1 - 1;
          } while (0 < (int)uVar1);
        }
      }
      else {
        do {
          _DAT_0003ccc4 = _DAT_0003ccc4 + DAT_0003f19b;
          uVar1 = uVar1 - 1;
        } while (-1 < (int)uVar1);
      }
    }
    else {
      _DAT_0003ccc4 = (ushort)DAT_0003f19b * 2 + _DAT_0003ccc4;
    }
  }
  else {
    _DAT_0003ccc4 = (ushort)DAT_0003f406;
  }
  return;
}
