/* @k10d ceil_divide_by_field_size @ 0x104ce5a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes the ceiling of (param_2 - 1) divided by the value stored at param_1 + 8.
 * summary:
 *   The function performs a ceiling division of (param_2 - 1) by the unsigned integer
 *   located at offset 8 of the structure pointed to by param_1. If param_2 is zero, it
 *   returns zero. The specific meaning of the structure field at offset 8 is not
 *   determinable from the pseudocode alone, as there are no callees or additional context
 *   to identify the subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint ceil_divide_by_field_size(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (param_2 + -1 + *(uint *)(param_1 + 8)) / *(uint *)(param_1 + 8);
  }
  return uVar1;
}
