/* @k10d decrement_counter_on_mismatch @ 0x000e8c1a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns 1 if the counter is zero; otherwise decrements it or sets it to 5 if param_1
 *   matches a specific constant.
 * summary:
 *   Checks if the short value pointed to by param_2 is zero. If non-zero, it compares
 *   param_1 against a constant derived from DAT_00000001 (bit 3 test). If they match, it
 *   sets the counter to 5; otherwise, it decrements the counter. Returns 0 in both non-zero
 *   cases, 1 if the counter was initially zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t decrement_counter_on_mismatch(int param_1,short *param_2)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (*param_2 != 0) {
    if (-((_DAT_00000001 << 0x1b) >> 0x1f) == param_1) {
      *param_2 = 5;
    }
    else {
      *param_2 = *param_2 + -1;
    }
    uVar1 = 0;
  }
  return uVar1;
}
