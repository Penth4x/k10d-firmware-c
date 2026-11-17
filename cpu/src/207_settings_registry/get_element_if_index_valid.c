/* @k10d get_element_if_index_valid @ 0x104a9caa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns the element at param_2 if it is less than the count stored at param_1+4,
 *   otherwise returns 0.
 * summary:
 *   Checks param_2 against a size/count field at offset 4 of the object pointed to by
 *   param_1. If the index is in range, it calls read_table_entry_by_index with the object
 *   and index to retrieve the element; otherwise it returns 0. The callee
 *   read_table_entry_by_index is not named, so the specific data type is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_element_if_index_valid(void *param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < *(uint *)((int)param_1 + 4)) {
    uVar1 = read_table_entry_by_index(param_1,param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
