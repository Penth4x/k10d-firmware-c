/* @k10d compute_division_ratio @ 0x104ce532
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes the ratio of a difference to a value derived from two parameters.
 * summary:
 *   The function takes a base pointer (param_1) and two indices (param_2, param_3). It
 *   calls ceil_divide_by_field_size twice with these indices to obtain two values. It then
 *   compares the second value against a field at offset 4 of the object pointed to by
 *   param_1. If the second value is smaller, it calculates the difference between the field
 *   and the second value, and divides that by the first value. The result is returned as an
 *   unsigned integer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_division_ratio(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = ceil_divide_by_field_size(param_1,param_2);
    uVar2 = ceil_divide_by_field_size(param_1,param_3);
    if (uVar2 < *(uint *)(param_1 + 4)) {
      uVar3 = (*(uint *)(param_1 + 4) - uVar2) / uVar1;
    }
  }
  return uVar3;
}
