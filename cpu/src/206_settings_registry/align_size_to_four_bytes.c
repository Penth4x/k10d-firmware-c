/* @k10d align_size_to_four_bytes @ 0x104a8a82
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns param_2 rounded up to the next multiple of 4 if it is at least 5, otherwise 0.
 * summary:
 *   The function checks if param_2 is less than 5; if so it returns 0. Otherwise it adds 3
 *   to param_2 and masks with 0xfffffffc to round up to the nearest 4-byte boundary. It
 *   does not call any other functions and has no side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint align_size_to_four_bytes(uint32_t param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 5) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2 + 3 & 0xfffffffc;
  }
  return uVar1;
}
