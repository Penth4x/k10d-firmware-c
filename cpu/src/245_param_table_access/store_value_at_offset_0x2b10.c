/* @k10d store_value_at_offset_0x2b10 @ 0x104d68f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x2b10(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x2b10) = param_2;
  return;
}
