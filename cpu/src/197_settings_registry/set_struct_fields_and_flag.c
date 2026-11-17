/* @k10d set_struct_fields_and_flag @ 0x1049306e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 197_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_struct_fields_and_flag(void *param_1,uint16_t param_2,uint32_t param_3)

{
  *(uint16_t *)((int)param_1 + 0x34) = param_2;
  *(uint32_t *)((int)param_1 + 0x38) = param_3;
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
