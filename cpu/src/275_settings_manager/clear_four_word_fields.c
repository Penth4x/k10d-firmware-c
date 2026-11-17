/* @k10d clear_four_word_fields @ 0x1051c4fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes four consecutive 32-bit fields at offsets 8, 12, 16, and 20 of a structure
 *   passed in param_1.
 * summary:
 *   The function writes zero to four 32-bit offsets (0x8, 0xc, 0x10, 0x14) within the
 *   memory block pointed to by param_1. It has no callees and performs no other operations.
 *   The specific role of the structure is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_four_word_fields(int param_1)

{
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0xc) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  *(uint32_t *)(param_1 + 0x14) = 0;
  return;
}
