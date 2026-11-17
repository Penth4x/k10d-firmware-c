/* @k10d read_array_element_at_offset @ 0x1051e52c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value at a computed offset within a memory block.
 * summary:
 *   The function calculates an address by adding 0xc to param_1 and adding param_2
 *   multiplied by 4. It then dereferences this address and returns the 32-bit value stored
 *   there. This is a simple array access helper with a fixed header offset of 12 bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_array_element_at_offset(int param_1,int param_2)

{
  return *(uint32_t *)(param_1 + 0xc + param_2 * 4);
}
