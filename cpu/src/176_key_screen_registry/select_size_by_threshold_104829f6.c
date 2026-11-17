/* @k10d select_size_by_threshold_104829f6 @ 0x104829f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Returns a size constant (0xc, 0x10, or 0x20) based on two threshold comparisons of
 *   param_2.
 * summary:
 *   The function compares the unsigned parameter param_2 against 0xff5 and 0xfff4. If
 *   param_2 is less than 0xff5, it returns 0xc. If it is between 0xff5 and 0xfff4
 *   inclusive, it returns 0x10. If it is greater than 0xfff4, it returns 0x20. No memory
 *   access or side effects are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_size_by_threshold_104829f6(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0xff5) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = 0x10;
    if (0xfff4 < param_2) {
      uVar1 = 0x20;
    }
  }
  return uVar1;
}
