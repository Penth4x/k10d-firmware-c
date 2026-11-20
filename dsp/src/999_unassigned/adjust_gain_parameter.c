/* @k10d adjust_gain_parameter @ 0x000ce196
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a gain-like parameter based on a comparison of computed values, clamping the
 *   result between 0x40 and 0xc0.
 * summary:
 *   The function checks if DAT_0003f49e and DAT_0003ce0b are non-zero. It calls
 *   divide_two_integers and clamp_product_to_16bit_000ce692 to compute values, then
 *   compares them. If a condition is met, it calls unsigned_divide, clamps the result to
 *   the range [0x40, 0xc0], and updates _DAT_0003cc6a. Finally, it stores the clamped value
 *   in DAT_0003ce0b and copies _DAT_0003cc6a to _DAT_0003ce1a. The specific hardware or
 *   subsystem context is not determinable from the provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_gain_parameter(void)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_0003f49e != 0) {
    uVar4 = 0x80;
    if (DAT_0003ce0b != 0) {
      uVar1 = divide_two_integers((uint)_DAT_0003cc6a * (uint)_DAT_0003ce0c,_DAT_0003ce0e);
      iVar2 = clamp_product_to_16bit_000ce692(uVar1,(uint)DAT_0003ce0b << 1);
      uVar5 = iVar2 - (uint)_DAT_0003ce1c;
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      uVar3 = clamp_product_to_16bit_000ce692(DAT_0003ce12,_DAT_0003ce0e);
      if (uVar3 < uVar5) {
        if ((0 < (int)((uint)_DAT_0003ce1a - iVar2)) &&
           (0 < (int)((uint)_DAT_0003ce1a - (uint)_DAT_0003ce1c))) {
          iVar2 = unsigned_divide((uint)DAT_0003f49e * ((uint)_DAT_0003ce1a - (uint)_DAT_0003ce1c), __frv_reg_unset(5));
          uVar4 = (iVar2 - (uint)DAT_0003f49e) + 0x80;
          if (0xc0 < uVar4) {
            uVar4 = 0xc0;
          }
          if (uVar4 < 0x40) {
            uVar4 = 0x40;
          }
          _DAT_0003cc6a = clamp_product_to_16bit_000ce692(_DAT_0003cc6a,uVar4 << 1);
        }
      }
    }
    DAT_0003ce0b = (byte)uVar4;
    _DAT_0003ce1a = _DAT_0003cc6a;
    _DAT_0003ce0c = _DAT_0003ce0e;
  }
  return;
}
