/* @k10d heap_alloc_one_byte_1045a22e @ 0x1045a22e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a single byte from the system heap when the argument is zero.
 * summary:
 *   Checks if param_1 is zero; if so, calls heap_alloc(1) to obtain a one-byte allocation.
 *   The allocated pointer is returned in r4 but discarded by the caller's void return type.
 *   Part of the rtos_wrappers_and_heap module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void heap_alloc_one_byte_1045a22e(int param_1)

{
  if (param_1 == 0) {
    heap_alloc((void *)1);
  }
  return;
}
