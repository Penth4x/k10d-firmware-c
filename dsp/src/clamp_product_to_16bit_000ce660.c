/* @k10d clamp_product_to_16bit_000ce660 @ 0x000ce660
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Multiplies two parameters, scales the result by a global constant, and clamps it to
 *   0xffff.
 * summary:
 *   The function calls unsigned_divide with the product of param_1 and param_2 and the
 *   global _DAT_0003ce34. It then multiplies the returned value by _DAT_0003ce3a, shifts
 *   right by 8 bits, and clamps the result to a maximum of 0xffff. The specific meaning of
 *   the globals and the callee is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint clamp_product_to_16bit_000ce660(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = unsigned_divide(param_1 * param_2,_DAT_0003ce34);
  uVar2 = iVar1 * (uint)_DAT_0003ce3a >> 8;
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  return uVar2;
}
