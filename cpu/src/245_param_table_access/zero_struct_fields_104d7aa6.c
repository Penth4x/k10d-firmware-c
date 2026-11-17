/* @k10d zero_struct_fields_104d7aa6 @ 0x104d7aa6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_struct_fields_104d7aa6(uint32_t *param_1)

{
  *param_1 = 0;
  *(uint8_t *)(param_1 + 1) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(uint8_t *)(param_1 + 0x45) = 0;
  *(uint8_t *)((int)param_1 + 0x115) = 0;
  *(uint8_t *)((int)param_1 + 0x116) = 0;
  *(uint8_t *)((int)param_1 + 0x117) = 0;
  *(uint8_t *)(param_1 + 0x46) = 0;
  return;
}
