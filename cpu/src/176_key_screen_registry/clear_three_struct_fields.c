/* @k10d clear_three_struct_fields @ 0x10482eb2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_three_struct_fields(int param_1)

{
  *(uint32_t *)(param_1 + 0x14) = 0;
  *(uint32_t *)(param_1 + 0xc) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  return;
}
