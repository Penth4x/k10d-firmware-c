/* @k10d clamp_index_to_range_10513b14 @ 0x10513b14
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_index_to_range_10513b14(uint32_t param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 1;
  if (0x27 < iVar1) {
    iVar1 = param_2 + -0x27;
  }
  return iVar1;
}
