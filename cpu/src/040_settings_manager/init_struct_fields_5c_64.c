/* @k10d init_struct_fields_5c_64 @ 0x10398090
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_fields_5c_64(void *param_1)

{
  *(uint16_t *)((int)param_1 + 0x5c) = 0;
  *(uint16_t *)((int)param_1 + 0x5e) = 0;
  *(uint16_t *)((int)param_1 + 0x60) = 1;
  *(uint16_t *)((int)param_1 + 0x62) = 1;
  *(uint8_t *)((int)param_1 + 100) = 0;
  return;
}
