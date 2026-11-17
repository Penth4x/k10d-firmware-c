/* @k10d compute_clamped_scaled_value @ 0x000d1fa2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a value from a global source, optionally scales it via a lookup table, clamps
 *   it to 0xff, and stores the result in two globals.
 * summary:
 *   The function branches on bit 6 of DAT_0003c128. If clear, it derives a base value from
 *   DAT_0003c103 and passes it to clamp_product_to_16bit_000ce692 if DAT_0003f2c8 is non-
 *   zero. If set, it calls check_flag_and_call_helper_000f6dea and
 *   check_flag_and_copy_word. It then conditionally scales the value using a lookup table
 *   at DAT_000fb094 and a factor from DAT_0003f477, clamping the result to 0xff before
 *   storing it in _DAT_0003c134 and DAT_0003cd5f.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_clamped_scaled_value(void)

{
  byte bVar1;
  uint uVar2;
  
  if ((DAT_0003c128 & 0x40) == 0) {
    _DAT_0003c134 = (ushort)(DAT_0003c103 >> 2) << ((DAT_0003c103 & 3) << 1);
    if (_DAT_0003f2c8 != 0) {
      _DAT_0003c134 = clamp_product_to_16bit_000ce692(_DAT_0003c134,_DAT_0003f2c8);
    }
  }
  else {
    check_flag_and_call_helper_000f6dea();
    check_flag_and_copy_word();
  }
  DAT_0003cd5f = 0xff;
  if ((DAT_0003c128 & 0x40) == 0) {
    bVar1 = DAT_0003c110 & 4;
  }
  else {
    bVar1 = 4;
  }
  if (((DAT_0003f477 != 0) && ((DAT_0003c126 & 8) != 0)) && (bVar1 != 0)) {
    uVar2 = (uint)(byte)(&DAT_000fb094)[(DAT_0003c111 & 0x1f) + 2 >> 2] * (uint)DAT_0003f477 >> 5;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    _DAT_0003c134 = clamp_product_to_16bit_000ce692(_DAT_0003c134,uVar2);
    DAT_0003cd5f = (uint8_t)uVar2;
  }
  return;
}
