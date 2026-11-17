/* @k10d write_two_bytes_to_offset_0xc_10463836 @ 0x10463836
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_offset_0xc_10463836(void *param_1,uint32_t param_2)

{
  *(char *)((int)param_1 + 0xc) = (char)((uint)param_2 >> 8);
  *(char *)((int)param_1 + 0xd) = (char)param_2;
  return;
}
