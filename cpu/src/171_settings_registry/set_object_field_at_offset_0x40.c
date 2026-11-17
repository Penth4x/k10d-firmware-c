/* @k10d set_object_field_at_offset_0x40 @ 0x1047f938
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_at_offset_0x40(int *param_1,uint8_t param_2)

{
  *(uint8_t *)(*param_1 + 0x40) = param_2;
  return;
}
