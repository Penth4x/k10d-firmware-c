/* @k10d heap_alloc_one_byte_1045926e @ 0x1045926e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a single byte from the system heap, or returns the provided pointer if non-
 *   NULL.
 * summary:
 *   Checks if param_1 is zero; if so, calls heap_alloc(1) to obtain a one-byte allocation.
 *   Returns the resulting pointer in r4. This is a thin convenience wrapper around
 *   heap_alloc for the common case of allocating a single byte, used by several class
 *   constructors and other functions in the rtos_wrappers_and_heap module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int heap_alloc_one_byte_1045926e(int param_1)

{
  if (param_1 == 0) {
    param_1 = heap_alloc((void *)1);
  }
  return param_1;
}
