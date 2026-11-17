/* @k10d write_two_bytes_to_struct_104639b2 @ 0x104639b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_struct_104639b2(void *param_1,uint32_t param_2)

{
  *(char *)((int)param_1 + 0x1c) = (char)((uint)param_2 >> 8);
  *(char *)((int)param_1 + 0x1d) = (char)param_2;
  return;
}
