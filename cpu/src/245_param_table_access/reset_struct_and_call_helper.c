/* @k10d reset_struct_and_call_helper @ 0x104d5636
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Zeroes two fields at offsets 0x9c and 0xa0 of a struct, then calls a helper with the
 *   struct and 0.
 * summary:
 *   The function takes a pointer to a structure, writes 0 to the 4-byte field at offset
 *   0x9c and the 1-byte field at offset 0xa0, and then invokes fill_byte_array_with_value
 *   with the struct pointer and an integer 0. The specific role of the struct and the
 *   helper is not determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_struct_and_call_helper(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x9c) = 0;
  *(uint8_t *)((int)param_1 + 0xa0) = 0;
  fill_byte_array_with_value((int)param_1,0);
  return;
}
