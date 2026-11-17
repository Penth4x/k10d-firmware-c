/* @k10d read_struct_field_at_index_1046c7ca @ 0x1046c7ca
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value at offset 8 plus index*4 within a structure pointed to by
 *   param_1.
 * summary:
 *   The function performs a simple memory dereference: it adds 8 to param_1, adds param_2
 *   multiplied by 4, and returns the 32-bit value at that address. This pattern is typical
 *   for accessing an array of 32-bit elements that starts at offset 8 of a structure. No
 *   callees are involved, and no specific camera subsystem behavior is evident from the
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_at_index_1046c7ca(int param_1,int param_2)

{
  return *(uint32_t *)(param_1 + 8 + param_2 * 4);
}
