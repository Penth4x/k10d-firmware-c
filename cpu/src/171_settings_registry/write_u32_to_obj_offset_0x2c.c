/* @k10d write_u32_to_obj_offset_0x2c @ 0x1047f8f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_u32_to_obj_offset_0x2c(int *param_1,uint32_t param_2)

{
  *(char *)(*param_1 + 0x2c) = (char)param_2;
  *(char *)(*param_1 + 0x2d) = (char)((uint)param_2 >> 8);
  *(char *)(*param_1 + 0x2e) = (char)((uint)param_2 >> 0x10);
  *(char *)(*param_1 + 0x2f) = (char)((uint)param_2 >> 0x18);
  return;
}
