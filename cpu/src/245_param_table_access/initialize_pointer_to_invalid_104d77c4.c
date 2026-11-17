/* @k10d initialize_pointer_to_invalid_104d77c4 @ 0x104d77c4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Sets the first 4 bytes of the pointed-to structure to 0xffffffff and the 5th byte to 0.
 * summary:
 *   The function writes a 32-bit value of 0xffffffff to the memory location pointed to by
 *   param_1, followed by writing a 0x00 byte to the next memory location (offset 3). This
 *   pattern is commonly used to initialize a pointer or handle to an invalid or null state.
 *   No callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_pointer_to_invalid_104d77c4(uint32_t *param_1)

{
  *param_1 = 0xffffffff;
  *(uint8_t *)(param_1 + 3) = 0;
  return;
}
