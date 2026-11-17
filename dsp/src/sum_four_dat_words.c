/* @k10d sum_four_dat_words @ 0x000d54fe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the sum of four 32-bit values stored at consecutive DAT addresses.
 * summary:
 *   The function reads four global variables (_DAT_0003ccc8, _DAT_0003ccca, _DAT_0003cccc,
 *   _DAT_0003ccce), casts them to unsigned integers, and returns their arithmetic sum. No
 *   memory writes, MMIO accesses, or kernel calls are performed. The role of the underlying
 *   data is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sum_four_dat_words(void)

{
  return (uint)_DAT_0003ccce + (uint)_DAT_0003ccc8 + (uint)_DAT_0003cccc + (uint)_DAT_0003ccca;
}
