/* @k10d read_struct_field_by_index_1049a7dc @ 0x1049a7dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a 4-byte field from a structure array at a given index, or 0 if the index is
 *   out of range.
 * summary:
 *   The function validates that param_2 is between 0 and 3 inclusive. If valid, it
 *   dereferences a pointer at offset (param_2 * 0x38 + 0x2c) from param_1 and returns the
 *   4-byte value. If invalid, it returns 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_by_index_1049a7dc(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((param_2 < 0) || (3 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint32_t *)((int)param_1 + param_2 * 0x38 + 0x2c);
  }
  return uVar1;
}
