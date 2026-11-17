/* @k10d write_field_at_offset_four_10493da0 @ 0x10493da0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes the second argument into the memory location at offset 4 of the first argument.
 * summary:
 *   The function performs a single 32-bit store to *(param_1 + 4) using param_2. It has no
 *   callees and no other side effects. The specific role of the data structure pointed to
 *   by param_1 is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_four_10493da0(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 4) = param_2;
  return;
}
