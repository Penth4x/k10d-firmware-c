/* @k10d call_helper_with_offset_value_104a5a86 @ 0x104a5a86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads a value from a nested pointer structure and passes it to a helper function.
 * summary:
 *   The function dereferences a pointer at offset 0x60 of param_1, then reads a 4-byte
 *   value at offset 0x2048 from that location. It adds 0x32 to this value and casts it to a
 *   short. This result is passed as the third argument to write_word_to_dynamic_array,
 *   along with param_2 and 0. The specific role of the data or the helper function is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_value_104a5a86(int param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,(short)*(uint32_t *)(*(int *)(param_1 + 0x60) + 0x2048) + 0x32);
  return;
}
