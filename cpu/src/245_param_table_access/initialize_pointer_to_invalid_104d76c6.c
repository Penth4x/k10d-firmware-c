/* @k10d initialize_pointer_to_invalid_104d76c6 @ 0x104d76c6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Sets the first 4 bytes of the pointed-to memory to 0xffffffff and the 5th byte to 0.
 * summary:
 *   The function writes the constant 0xffffffff to the memory location pointed to by
 *   param_1 and then writes 0 to the byte at offset 4. This is a simple initialization
 *   routine, likely setting a pointer or handle to an invalid or null state. No other side
 *   effects or callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_pointer_to_invalid_104d76c6(uint32_t *param_1)

{
  *param_1 = 0xffffffff;
  *(uint8_t *)(param_1 + 3) = 0;
  return;
}
