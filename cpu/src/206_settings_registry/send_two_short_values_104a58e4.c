/* @k10d send_two_short_values_104a58e4 @ 0x104a58e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Extracts two 16-bit values from a structure and passes them to a helper with indices 0
 *   and 1.
 * summary:
 *   The function reads a pointer from offset 0xc of the object in param_1. It then
 *   dereferences that pointer to get a base address, reads a 16-bit value at offset 8, and
 *   passes it to write_word_to_dynamic_array with index 0. It repeats this process for the
 *   16-bit value at offset 0xc, passing it to write_word_to_dynamic_array with index 1. The
 *   specific role of write_word_to_dynamic_array is unknown, but the pattern suggests
 *   transmitting or setting two consecutive fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_two_short_values_104a58e4(int param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,(short)*(uint32_t *)(*(int *)(param_1 + 0xc) + 8));
  write_word_to_dynamic_array(param_2,1,(short)*(uint32_t *)(*(int *)(param_1 + 0xc) + 0xc));
  return;
}
