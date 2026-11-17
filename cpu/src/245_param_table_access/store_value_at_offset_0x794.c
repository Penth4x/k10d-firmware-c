/* @k10d store_value_at_offset_0x794 @ 0x104d6426
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Writes the second argument into the object field at offset 0x794.
 * summary:
 *   The function performs a single 32-bit store of param_2 to the memory location param_1 +
 *   0x794 and returns. It has no callees and no other side effects. The meaning of the
 *   field at offset 0x794 is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x794(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x794) = param_2;
  return;
}
