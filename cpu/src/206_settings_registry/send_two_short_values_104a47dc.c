/* @k10d send_two_short_values_104a47dc @ 0x104a47dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Extracts two 16-bit values from a pointer field in param_1 and passes them to a helper
 *   with indices 0 and 1.
 * summary:
 *   The function reads a pointer from offset 8 of the param_1 structure. It dereferences
 *   this pointer to get the first 16-bit value and reads the second 16-bit value from
 *   offset 4 of the same pointed-to structure. Both values are passed to
 *   write_word_to_dynamic_array along with param_2 and indices 0 and 1 respectively. The
 *   specific role of write_word_to_dynamic_array is unknown, so the mechanical behavior is
 *   described as sending or passing two short values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_two_short_values_104a47dc(int param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,(short)**(uint32_t **)(param_1 + 8));
  write_word_to_dynamic_array(param_2,1,(short)*(uint32_t *)(*(int *)(param_1 + 8) + 4));
  return;
}
