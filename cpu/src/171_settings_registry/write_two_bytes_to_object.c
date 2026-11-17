/* @k10d write_two_bytes_to_object @ 0x1047f8e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_object(int *param_1,uint8_t param_2,uint8_t param_3)

{
  *(uint8_t *)(*param_1 + 0x2a) = param_2;
  *(uint8_t *)(*param_1 + 0x2b) = param_3;
  return;
}
