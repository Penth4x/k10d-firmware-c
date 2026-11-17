/* @k10d initialize_struct_to_invalid_104d72d2 @ 0x104d72d2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Sets the first 4 bytes of a structure to 0xffffffff and the 5th byte to 0.
 * summary:
 *   The function writes a 32-bit value of 0xffffffff to the memory location pointed to by
 *   param_1 and sets the byte at offset 4 to 0. This is a common pattern for initializing a
 *   structure to an invalid or empty state, where 0xffffffff often serves as a sentinel
 *   value for an ID or pointer. No other side effects or callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_struct_to_invalid_104d72d2(uint32_t *param_1)

{
  *param_1 = 0xffffffff;
  *(uint8_t *)(param_1 + 4) = 0;
  return;
}
