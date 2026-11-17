/* @k10d call_helper_with_shifted_mask @ 0x1051a520
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls write_to_dynamic_array with a value derived from a 4-bit field in a struct
 *   member.
 * summary:
 *   Reads a 4-bit field from a pointer located at offset 0x5c+0x24 of the object in
 *   param_1. It shifts 1 by that field value and subtracts 1 to create a bitmask. This mask
 *   is passed as the third argument to write_to_dynamic_array, along with param_2 and 0.
 *   The function acts as a thin wrapper to compute a specific mask before delegating to the
 *   callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_shifted_mask(int param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,(1 << ((byte)*(uint16_t *)(*(int *)(param_1 + 0x5c) + 0x24) & 0xf)) + -1)
  ;
  return;
}
