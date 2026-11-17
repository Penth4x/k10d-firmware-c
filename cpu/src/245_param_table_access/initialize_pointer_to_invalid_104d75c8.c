/* @k10d initialize_pointer_to_invalid_104d75c8 @ 0x104d75c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Sets the first 4 bytes of the pointed-to memory to 0xffffffff and the 5th byte to 0.
 * summary:
 *   The function writes a 32-bit value of 0xffffffff to the address provided in param_1,
 *   followed by writing a 0x00 byte to the next memory location. This pattern is commonly
 *   used to initialize a pointer or handle to an invalid or null state. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_pointer_to_invalid_104d75c8(uint32_t *param_1)

{
  *param_1 = 0xffffffff;
  *(uint8_t *)(param_1 + 3) = 0;
  return;
}
