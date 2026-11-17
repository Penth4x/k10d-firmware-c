/* @k10d write_field_at_offset_104a9fbe @ 0x104a9fbe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_field_at_offset_104a9fbe(void *param_1,int param_2,uint32_t param_3)

{
  *(uint32_t *)((int)param_1 + param_2 * 4 + 0x24) = param_3;
  return 1;
}
