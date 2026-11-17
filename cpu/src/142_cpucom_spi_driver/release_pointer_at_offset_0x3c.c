/* @k10d release_pointer_at_offset_0x3c @ 0x1046524e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls call_kernel_with_short_id on the pointer stored at offset 0x3c of the object if
 *   it is non-null.
 * summary:
 *   Reads the 4-byte value at offset 0x3c of param_1. If it is not zero, it passes that
 *   value as the first argument to call_kernel_with_short_id. The function returns void.
 *   The specific role of call_kernel_with_short_id is not provided, so the exact nature of
 *   the operation (free, close, destroy) is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_0x3c(void *param_1)

{
  if (*(uint32_t **)((int)param_1 + 0x3c) != (uint32_t *)0x0) {
    call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x3c));
  }
  return;
}
