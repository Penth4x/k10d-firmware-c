/* @k10d set_field_at_offset_0x14_104aa6e2 @ 0x104aa6e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 209_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_field_at_offset_0x14_104aa6e2(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 0x14) = param_2;
  return 1;
}
