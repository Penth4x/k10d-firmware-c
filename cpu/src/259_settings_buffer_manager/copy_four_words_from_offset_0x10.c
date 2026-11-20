/* @k10d copy_four_words_from_offset_0x10 @ 0x104f48e4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Copies four consecutive 32-bit words from offset 0x10 to offset 0x30 of the given
 *   structure.
 * summary:
 *   The function performs four direct 32-bit memory copies from param_1+0x10 through
 *   param_1+0x1c into param_1+0x30 through param_1+0x3c. No other operations, flags, or
 *   callees are involved. The caller at 0x1050e732 is not named, so the specific subsystem
 *   role is not determinable from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_from_offset_0x10(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x30) = *(uint32_t *)((int)param_1 + 0x10);
  *(uint32_t *)((int)param_1 + 0x34) = *(uint32_t *)((int)param_1 + 0x14);
  *(uint32_t *)((int)param_1 + 0x38) = *(uint32_t *)((int)param_1 + 0x18);
  *(uint32_t *)((int)param_1 + 0x3c) = *(uint32_t *)((int)param_1 + 0x1c);
  return;
}
