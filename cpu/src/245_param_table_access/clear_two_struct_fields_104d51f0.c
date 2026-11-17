/* @k10d clear_two_struct_fields_104d51f0 @ 0x104d51f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_struct_fields_104d51f0(void *param_1)

{
  *(uint32_t *)((int)param_1 + 8) = 0;
  *(uint8_t *)((int)param_1 + 0xc) = 0;
  return;
}
