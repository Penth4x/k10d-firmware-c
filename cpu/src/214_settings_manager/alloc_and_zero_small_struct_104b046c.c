/* @k10d alloc_and_zero_small_struct_104b046c @ 0x104b046c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 12-byte heap block (or uses a provided pointer) and zeroes its three words.
 * summary:
 *   If param_1 is NULL, calls heap_alloc(0xc) to obtain a 12-byte block; on success (or if
 *   a non-NULL pointer was passed) it writes 0 to the first three 32-bit words of the
 *   block. The allocated pointer is not returned to the caller, so the caller must already
 *   hold a reference or this is a fire-and-forget initialization helper. No camera-specific
 *   MMIO or subsystem behavior is visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_small_struct_104b046c(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
