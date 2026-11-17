/* @k10d initialize_struct_with_sentinel @ 0x104d71c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Sets the first 4 bytes of a structure to 0xffffffff and the 7th byte to 0.
 * summary:
 *   The function takes a pointer to a memory block and writes a 32-bit value of 0xffffffff
 *   to the start of the block. It then writes a zero byte at offset 6 (the 7th byte). No
 *   other memory locations are modified and no functions are called. The specific role of
 *   this structure is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_struct_with_sentinel(uint32_t *param_1)

{
  *param_1 = 0xffffffff;
  *(uint8_t *)(param_1 + 6) = 0;
  return;
}
