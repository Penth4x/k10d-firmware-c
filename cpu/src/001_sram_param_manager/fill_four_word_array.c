/* @k10d fill_four_word_array @ 0x100f0ed8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Populates a 4-element array by calling get_value_from_struct_by_index with indices 3,
 *   2, 1, 0 in reverse order.
 * summary:
 *   The function takes a pointer to an array of four 32-bit words. It calls the single
 *   callee get_value_from_struct_by_index four times, passing arguments 3, 2, 1, and 0
 *   respectively. The return values are stored into the array elements in the order
 *   param_1[0] through param_1[3]. The specific role of get_value_from_struct_by_index is
 *   unknown, so the semantic meaning of the data being retrieved is indeterminate.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_four_word_array(uint32_t *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_value_from_struct_by_index(3);
  *param_1 = uVar1;
  uVar1 = get_value_from_struct_by_index(2);
  param_1[1] = uVar1;
  uVar1 = get_value_from_struct_by_index(1);
  param_1[2] = uVar1;
  uVar1 = get_value_from_struct_by_index(0);
  param_1[3] = uVar1;
  return;
}
