/* @k10d clear_two_word_fields_1051d02a @ 0x1051d02a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes two 32-bit fields at offsets 0x58 and 0x5c of a structure passed in param_1.
 * summary:
 *   The function writes 0 to the 4-byte locations at param_1+0x58 and param_1+0x5c. It has
 *   no callees and no other side effects. The caller is dispatch_param_after_init, but the
 *   role of the structure and these specific fields cannot be determined from the provided
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_word_fields_1051d02a(int param_1)

{
  *(uint32_t *)(param_1 + 0x5c) = 0;
  *(uint32_t *)(param_1 + 0x58) = 0;
  return;
}
