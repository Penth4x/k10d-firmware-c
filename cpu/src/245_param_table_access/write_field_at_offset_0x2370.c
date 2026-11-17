/* @k10d write_field_at_offset_0x2370 @ 0x104d6896
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_0x2370(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x2370) = param_2;
  return;
}
