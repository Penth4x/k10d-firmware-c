/* @k10d clamp_index_to_range_10513af8 @ 0x10513af8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_index_to_range_10513af8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if ((param_2 < 0x28) && (iVar1 = *(int *)(param_1 + 0x161c0) + param_2, 0x27 < iVar1)) {
    iVar1 = iVar1 + -0x28;
  }
  return iVar1;
}
