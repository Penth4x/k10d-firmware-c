/* @k10d classify_size_into_category @ 0x104828be
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Returns a small integer category (1, 4, or 6) based on which size range param_2 falls
 *   into.
 * summary:
 *   The function compares param_2 against two thresholds (0x7fa8 and 0xffff) and returns 1,
 *   4, or 6 accordingly. It has no callees and no side effects. The caller
 *   compute_exposure_step_index is not named, so the specific domain meaning of the
 *   returned categories is not determinable from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t classify_size_into_category(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x7fa8) {
    uVar1 = 1;
  }
  else {
    uVar1 = 4;
    if (0xffff < param_2) {
      uVar1 = 6;
    }
  }
  return uVar1;
}
