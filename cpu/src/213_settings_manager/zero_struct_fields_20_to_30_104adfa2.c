/* @k10d zero_struct_fields_20_to_30_104adfa2 @ 0x104adfa2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets five consecutive 32-bit fields at offsets 0x20-0x30 of the object pointed to by
 *   param_1 to zero.
 * summary:
 *   The function writes the value 0 to five consecutive 4-byte locations within the memory
 *   block starting at param_1. It has no callees and performs no other operations. The
 *   specific role of the object or the meaning of these fields cannot be determined from
 *   the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_struct_fields_20_to_30_104adfa2(int param_1)

{
  *(uint32_t *)(param_1 + 0x20) = 0;
  *(uint32_t *)(param_1 + 0x24) = 0;
  *(uint32_t *)(param_1 + 0x28) = 0;
  *(uint32_t *)(param_1 + 0x2c) = 0;
  *(uint32_t *)(param_1 + 0x30) = 0;
  return;
}
