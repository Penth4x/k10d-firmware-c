/* @k10d init_object_fields_60_66 @ 0x1039ba1a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_fields_60_66(void *param_1)

{
  *(uint16_t *)((int)param_1 + 0x60) = 0;
  *(uint16_t *)((int)param_1 + 0x62) = 0;
  *(uint16_t *)((int)param_1 + 100) = 1;
  *(uint8_t *)((int)param_1 + 0x66) = 0;
  return;
}
