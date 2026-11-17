/* @k10d clear_struct_fields_104a1a02 @ 0x104a1a02
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes nine consecutive 32-bit fields at offsets 8 through 0x28 of a structure passed
 *   in param_1.
 * summary:
 *   The function writes zero to nine 4-byte locations within the memory block pointed to by
 *   param_1. It does not touch the first 8 bytes of the structure. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_fields_104a1a02(int param_1)

{
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0xc) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  *(uint32_t *)(param_1 + 0x14) = 0;
  *(uint32_t *)(param_1 + 0x18) = 0;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  *(uint32_t *)(param_1 + 0x20) = 0;
  *(uint32_t *)(param_1 + 0x24) = 0;
  *(uint32_t *)(param_1 + 0x28) = 0;
  return;
}
