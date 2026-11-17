/* @k10d alloc_and_zero_12_bytes @ 0x1041a758
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Allocates a 12-byte heap block if the input pointer is null, then zeroes the first 12
 *   bytes of the resulting pointer.
 * summary:
 *   The function checks if param_1 is null. If it is, it calls heap_alloc to obtain 12
 *   bytes (0xc). If the allocation succeeds, it stores the new pointer in param_1. It then
 *   unconditionally zeroes the first 12 bytes of the memory pointed to by param_1 (two
 *   32-bit words and one byte). This acts as a constructor or initializer for a small
 *   12-byte structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_12_bytes(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 2) = 0;
  }
  return;
}
