/* @k10d initialize_struct_to_invalid_104d70ac @ 0x104d70ac
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Sets the first 4 bytes of a structure to 0xffffffff and the next byte to 0.
 * summary:
 *   The function writes a 32-bit value of 0xffffffff to the memory location pointed to by
 *   param_1, followed by a zero byte at offset 4. This pattern is commonly used to
 *   initialize a structure or handle to an invalid or empty state. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_struct_to_invalid_104d70ac(uint32_t *param_1)

{
  *param_1 = 0xffffffff;
  *(uint8_t *)(param_1 + 4) = 0;
  return;
}
