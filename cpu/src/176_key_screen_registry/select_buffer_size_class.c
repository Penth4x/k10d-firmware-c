/* @k10d select_buffer_size_class @ 0x10482386
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Returns a small integer class (1, 4, 6, or 11) based on size thresholds of param_2.
 * summary:
 *   The function compares param_2 against three thresholds (0x7fa8, 0x3ffd40, and a derived
 *   0x7f0000) to return one of four constant values. It is called as virtual method slot 2
 *   of cls_105ab6a0. No callees are present, and the specific meaning of the returned
 *   values is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_buffer_size_class(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x7fa8) {
    uVar1 = 1;
  }
  else if (param_2 < 0x3ffd40) {
    if (param_2 << 9 < 0x1f40000) {
      uVar1 = 4;
    }
    else {
      uVar1 = 6;
    }
  }
  else {
    uVar1 = 0xb;
  }
  return uVar1;
}
