/* @k10d clamp_index_to_range_10513b22 @ 0x10513b22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_index_to_range_10513b22(uint32_t param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (iVar1 < 0) {
    iVar1 = 0x27;
  }
  return iVar1;
}
