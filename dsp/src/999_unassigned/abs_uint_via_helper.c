/* @k10d abs_uint_via_helper @ 0x000f7974
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes the absolute value of a 32-bit unsigned integer using a sign-bit mask and a
 *   helper call.
 * summary:
 *   Extracts the sign bit of param_1 and constructs a mask (0xffffffff if negative, 0
 *   otherwise). It applies the standard absolute-value idiom (x ^ mask) - mask to get the
 *   magnitude, passes it to compute_page_table_entry, and ORs the result with the original
 *   sign-bit mask. The function returns a value in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint abs_uint_via_helper(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)param_1 >> 0x1f;
  uVar2 = uVar1 << 0x1f;
  uVar1 = compute_page_table_entry((param_1 ^ uVar1) - uVar1);
  return uVar1 | uVar2;
}
