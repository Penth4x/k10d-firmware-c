/* @k10d pack_four_bytes_big_endian_10463b64 @ 0x10463b64
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint pack_four_bytes_big_endian_10463b64(uint32_t param_1,uint param_2,int param_3,int param_4,byte param_5)

{
  return (uint)param_5 << 0x18 | param_4 << 0x10 | param_3 << 8 | param_2;
}
