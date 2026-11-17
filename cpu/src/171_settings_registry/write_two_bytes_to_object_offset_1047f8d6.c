/* @k10d write_two_bytes_to_object_offset_1047f8d6 @ 0x1047f8d6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_object_offset_1047f8d6(int *param_1,uint32_t param_2)

{
  *(char *)(*param_1 + 0x28) = (char)param_2;
  *(char *)(*param_1 + 0x29) = (char)((uint)param_2 >> 8);
  return;
}
