/* @k10d advance_buffer_read_pointer_104ad348 @ 0x104ad348
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Advances a read pointer within a bounded buffer and returns the number of elements
 *   consumed.
 * summary:
 *   Takes a pointer to a structure containing a valid flag, an end pointer (param_1[1]),
 *   and a current read pointer (param_1[2]). If the structure is valid, it calculates the
 *   remaining capacity, clamps the requested count (param_2) to that capacity, advances the
 *   read pointer by the clamped amount, and returns the clamped count. If the structure is
 *   invalid, it returns 0 without modifying the pointers. This is a standard bounded buffer
 *   read/advance operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint advance_buffer_read_pointer_104ad348(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = param_1[1] - param_1[2];
    if (param_2 <= uVar1) {
      uVar1 = param_2;
    }
    param_1[2] = param_1[2] + uVar1;
  }
  return uVar1;
}
