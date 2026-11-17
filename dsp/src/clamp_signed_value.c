/* @k10d clamp_signed_value @ 0x000d1f5a
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Clamps a signed integer to a bounded range using a helper and a sign flag in a global.
 * summary:
 *   The function clears bit 3 of global DAT_0003cbd3, then if param_1 is negative it sets
 *   bit 5 of that global and negates the input. It calls divide_two_integers with the
 *   magnitude shifted left by 8 and a pointer to DAT_0003cd44, clamps the result to 0x7fff,
 *   and re-applies the sign if bit 5 was set. The role of divide_two_integers and the DAT
 *   globals is not known from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int clamp_signed_value(int param_1)

{
  int iVar1;
  
  DAT_0003cbd3 = DAT_0003cbd3 & 0xdf;
  if (param_1 < 0) {
    DAT_0003cbd3 = DAT_0003cbd3 | 0x20;
    param_1 = -param_1;
  }
  iVar1 = divide_two_integers(param_1 << 8,_DAT_0003cd44);
  if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  if ((DAT_0003cbd3 & 0x20) != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}
