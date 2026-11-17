/* @k10d clear_struct_fields_104d79d2 @ 0x104d79d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_fields_104d79d2(uint32_t *param_1)

{
  *param_1 = 0;
  *(uint8_t *)(param_1 + 1) = 0;
  param_1[0x41] = 0;
  *(uint8_t *)(param_1 + 0x42) = 0;
  return;
}
