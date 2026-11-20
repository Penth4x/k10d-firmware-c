/* @k10d scale_by_fixed_point @ 0x000ccf74
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Multiplies an input by a 16.16 fixed-point constant and returns the 16-bit fractional
 *   result.
 * summary:
 *   The function takes param_1, multiplies it by the 32-bit constant at _DAT_0003f2c8,
 *   shifts the result right by 8 bits, and masks to 16 bits. This is a standard fixed-point
 *   scaling operation where the constant likely represents a ratio or coefficient. No
 *   callees are invoked, and the result is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint scale_by_fixed_point(int param_1)

{
  return param_1 * (uint)_DAT_0003f2c8 >> 8 & 0xffff;
}
