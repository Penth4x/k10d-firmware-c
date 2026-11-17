/* @k10d check_size_alignment @ 0x1045c880
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if param_2 is a multiple of 400 or a multiple of 4 but not of 100.
 * summary:
 *   The function performs two arithmetic checks on the unsigned integer param_2. It first
 *   tests if param_2 is evenly divisible by 400. If not, it tests if param_2 is aligned to
 *   a 4-byte boundary (multiple of 4) but is not a multiple of 100. It returns 1 if either
 *   condition is true, otherwise 0. No memory access or side effects are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_size_alignment(void *param_1,uint param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_2 == (param_2 / 400) * 400) ||
     ((param_2 == (param_2 & 0xfffffffc) && (param_2 != (param_2 / 100) * 100)))) {
    uVar1 = 1;
  }
  return uVar1;
}
