/* @k10d align_down_to_32_bytes @ 0x10512bba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint align_down_to_32_bytes(uint32_t param_1,int param_2)

{
  return param_2 + 0x1fU & 0xffffffe0;
}
