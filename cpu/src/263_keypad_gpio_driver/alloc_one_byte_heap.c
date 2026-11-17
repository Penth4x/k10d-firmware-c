/* @k10d alloc_one_byte_heap @ 0x104febf6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Allocates a single byte from the system heap when the argument is zero.
 * summary:
 *   Checks if param_1 is zero; if so, calls heap_alloc(1) to obtain a one-byte heap block.
 *   The returned pointer is discarded (function is void). No other side effects or MMIO
 *   accesses are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_one_byte_heap(int param_1)

{
  if (param_1 == 0) {
    heap_alloc((void *)1);
  }
  return;
}
