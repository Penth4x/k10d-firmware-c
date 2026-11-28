/* @k10d store_word_to_pointer_1000d41a @ 0x1000d41a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Writes the second argument to the memory location pointed to by the first argument.
 * summary:
 *   This function performs a simple 32-bit store operation, assigning param_2 to the
 *   address in param_1. It is located in the rtos_kernel module, likely serving as a helper
 *   for kernel state updates or register writes. No other functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_word_to_pointer_1000d41a(uint32_t *dest,uint32_t val)

{
  *dest = val;
  return;
}
