/* @k10d copy_struct_fields_0x10_to_0x30 @ 0x104f48e4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Copies four consecutive 32-bit words from offset 0x10 to offset 0x30 within the
 *   structure pointed to by param_1.
 * summary:
 *   The function performs a simple memory copy of 16 bytes from one region of a structure
 *   to another. It reads four 32-bit values at offsets 0x10, 0x14, 0x18, and 0x1c and
 *   writes them to offsets 0x30, 0x34, 0x38, and 0x3c respectively. No other side effects
 *   or callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_fields_0x10_to_0x30(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x30) = *(uint32_t *)((int)param_1 + 0x10);
  *(uint32_t *)((int)param_1 + 0x34) = *(uint32_t *)((int)param_1 + 0x14);
  *(uint32_t *)((int)param_1 + 0x38) = *(uint32_t *)((int)param_1 + 0x18);
  *(uint32_t *)((int)param_1 + 0x3c) = *(uint32_t *)((int)param_1 + 0x1c);
  return;
}
