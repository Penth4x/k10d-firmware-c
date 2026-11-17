/* @k10d compute_and_store_ratio_value @ 0x104a241c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Computes a 16-bit ratio from two values and stores the result via a helper.
 * summary:
 *   Calls query_exposure_compensation to extract two values into stack variables.
 *   Calculates a 16-bit value using the formula (iStack_10 + (uStack_c >> 1)) / uStack_c,
 *   which represents a rounded division or ratio. Passes this computed value to
 *   write_word_to_dynamic_array along with param_2 and a zero argument. The specific camera
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_store_ratio_value(int param_1,int param_2)

{
  uint16_t uVar1;
  uintptr_t sp;
  int iStack_10;
  uint uStack_c;
  
  query_exposure_compensation(param_1,&iStack_10);
  uVar1 = allocate_heap_block_and_mask_result(*(uint32_t *)(param_1 + 0x2c),
                       (iStack_10 + (uStack_c >> 1)) / uStack_c & 0xffff);
  write_word_to_dynamic_array(param_2,0,uVar1);
  return;
}
