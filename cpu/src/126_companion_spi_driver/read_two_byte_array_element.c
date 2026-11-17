/* @k10d read_two_byte_array_element @ 0x1043567e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the 16-bit value at index param_2 in a 16-bit array located at param_1+4.
 * summary:
 *   The function performs a simple memory read: it computes the address param_1 + 4 +
 *   param_2 * 2 and returns the 16-bit value stored there. The offset of 4 suggests param_1
 *   points to a structure with a 32-bit header or first field, followed by an array of
 *   16-bit elements. No side effects or callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_two_byte_array_element(int param_1,int param_2)

{
  return *(uint16_t *)(param_1 + 4 + param_2 * 2);
}
