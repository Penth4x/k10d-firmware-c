/* @k10d dispatch_on_flag_bits_000e7846 @ 0x000e7846
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Returns a value from FUN_000e786a if bit 6 of DAT_0003c00f is set, otherwise
 *   conditionally calls infinite_loop_000e7a46 and returns 0.
 * summary:
 *   Checks bit 6 (0x40) of DAT_0003c00f. If clear, it checks if DAT_00000484 & 3 equals 2;
 *   if so, it calls infinite_loop_000e7a46. In the clear-bit path, it returns 0. If bit 6
 *   is set, it calls and returns the result of FUN_000e786a. The specific roles of the data
 *   globals and callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_flag_bits_000e7846(void)

{
  uint32_t uVar1;
  
  if ((DAT_0003c00f & 0x40) == 0) {
    if ((DAT_00000484 & 3) == 2) {
      infinite_loop_000e7a46();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_000e786a();
  }
  return uVar1;
}
