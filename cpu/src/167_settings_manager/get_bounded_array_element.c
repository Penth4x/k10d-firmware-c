/* @k10d get_bounded_array_element @ 0x104758e2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the element at an index from a pointer array, or 0 if the index is outside
 *   0..899.
 * summary:
 *   Calls subtract_100_from_param to obtain an index value. If the index is negative or
 *   greater than 899, returns 0. Otherwise, dereferences param_1 to get a base pointer and
 *   returns the 32-bit value at offset index*4. The callee subtract_100_from_param is
 *   unnamed, so the specific subsystem role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_bounded_array_element(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = subtract_100_from_param(__frv_reg_unset(4), __frv_reg_unset(5));
  if ((iVar1 < 0) || (899 < iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint32_t *)(*param_1 + iVar1 * 4);
  }
  return uVar2;
}
