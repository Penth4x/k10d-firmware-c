/* @k10d zero_struct_tail_fields @ 0x10506998
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 267_test_mode_state (unit names are model-proposed)
 * purpose:
 *   Clears eight 32-bit fields at fixed offsets (0x4e8-0x504) within a structure pointed to
 *   by param_1.
 * summary:
 *   The function writes zero to eight consecutive 32-bit locations in a memory block
 *   starting at param_1. It does not call any other functions and has no other side
 *   effects. The specific role of the structure or the meaning of these fields cannot be
 *   determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_struct_tail_fields(void *param_1)

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
