/* @k10d write_u32_to_struct_offset_0x1e @ 0x104639c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_u32_to_struct_offset_0x1e(void *param_1,uint32_t param_2)

{
  *(char *)((int)param_1 + 0x1e) = (char)((uint)param_2 >> 0x18);
  *(char *)((int)param_1 + 0x1f) = (char)((uint)param_2 >> 0x10);
  *(char *)((int)param_1 + 0x20) = (char)((uint)param_2 >> 8);
  *(char *)((int)param_1 + 0x21) = (char)param_2;
  return;
}
