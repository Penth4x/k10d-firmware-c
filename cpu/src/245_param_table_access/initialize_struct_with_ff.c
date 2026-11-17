/* @k10d initialize_struct_with_ff @ 0x104d74c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Sets the first 4 bytes of a structure to 0xffffffff and the byte at offset 0x6f to 0.
 * summary:
 *   The function takes a pointer to a memory block and writes the value 0xffffffff to the
 *   first 32-bit word. It then writes a zero to the byte at offset 0x6f (param_1 + 0x1b in
 *   32-bit words). No other memory locations are modified and no functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_struct_with_ff(uint32_t *param_1)

{
  *param_1 = 0xffffffff;
  *(uint8_t *)(param_1 + 0x1b) = 0;
  return;
}
