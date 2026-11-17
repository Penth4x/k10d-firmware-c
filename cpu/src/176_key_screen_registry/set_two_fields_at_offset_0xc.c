/* @k10d set_two_fields_at_offset_0xc @ 0x10482ea6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Writes two 32-bit values into a structure at offsets 0xc and 0x10.
 * summary:
 *   The function takes a pointer in param_1 and stores param_2 at offset 0xc and param_3 at
 *   offset 0x10. It performs no other operations and has no callees. The specific role of
 *   the structure fields is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_fields_at_offset_0xc(void *param_1,uint32_t param_2,uint32_t param_3)

{
  *(uint32_t *)((int)param_1 + 0xc) = param_2;
  *(uint32_t *)((int)param_1 + 0x10) = param_3;
  return;
}
