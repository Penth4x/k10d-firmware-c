/* @k10d store_value_at_offset_four_10435b50 @ 0x10435b50
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the second argument to the memory location at offset 4 of the first argument.
 * summary:
 *   The function performs a single 32-bit store operation, writing param_2 to the address
 *   param_1 + 4. It has no callees and no other side effects. The specific role of the data
 *   structure being modified is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_four_10435b50(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 4) = param_2;
  return;
}
