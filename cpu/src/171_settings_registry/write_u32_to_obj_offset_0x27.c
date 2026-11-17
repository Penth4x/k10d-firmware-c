/* @k10d write_u32_to_obj_offset_0x27 @ 0x1047f784
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_u32_to_obj_offset_0x27(int *param_1,uint32_t param_2)

{
  *(char *)(*param_1 + 0x27) = (char)param_2;
  *(char *)(*param_1 + 0x28) = (char)((uint)param_2 >> 8);
  *(char *)(*param_1 + 0x29) = (char)((uint)param_2 >> 0x10);
  *(char *)(*param_1 + 0x2a) = (char)((uint)param_2 >> 0x18);
  return;
}
