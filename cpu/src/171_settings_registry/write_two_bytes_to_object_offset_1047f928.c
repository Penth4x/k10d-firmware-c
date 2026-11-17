/* @k10d write_two_bytes_to_object_offset_1047f928 @ 0x1047f928
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_object_offset_1047f928(int *param_1,uint32_t param_2)

{
  *(char *)(*param_1 + 0x32) = (char)param_2;
  *(char *)(*param_1 + 0x33) = (char)((uint)param_2 >> 8);
  return;
}
