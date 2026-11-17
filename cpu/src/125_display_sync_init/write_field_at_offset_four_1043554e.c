/* @k10d write_field_at_offset_four_1043554e @ 0x1043554e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 125_display_sync_init (unit names are model-proposed)
 * purpose:
 *   Writes the second argument into the memory location at offset 4 of the first argument.
 * summary:
 *   The function performs a single 32-bit store to param_1 + 4 using param_2. It has no
 *   callees and no other side effects. The specific role of the data structure at param_1
 *   is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_four_1043554e(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 4) = param_2;
  return;
}
