/* @k10d zero_eight_words_at_offsets @ 0x10506998
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 267_test_mode_state (unit names are model-proposed)
 * purpose:
 *   Writes zero to eight 32-bit words at fixed offsets within a memory block.
 * summary:
 *   The function takes a base pointer and explicitly stores the value 0 into eight distinct
 *   32-bit locations: 0x500, 0x504, 0x4ec, 0x4e8, 0x4fc, 0x4f8, 0x4f4, and 0x4f0 relative
 *   to the base. There are no callees or conditional logic, indicating a simple
 *   initialization or clearing operation for a specific struct or buffer region. The caller
 *   is test_mode_state_init.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_eight_words_at_offsets(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x500) = 0;
  *(uint32_t *)((int)param_1 + 0x504) = 0;
  *(uint32_t *)((int)param_1 + 0x4ec) = 0;
  *(uint32_t *)((int)param_1 + 0x4e8) = 0;
  *(uint32_t *)((int)param_1 + 0x4fc) = 0;
  *(uint32_t *)((int)param_1 + 0x4f8) = 0;
  *(uint32_t *)((int)param_1 + 0x4f4) = 0;
  *(uint32_t *)((int)param_1 + 0x4f0) = 0;
  return;
}
