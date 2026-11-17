/* @k10d compare_two_short_pairs_10511af8 @ 0x10511af8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compare_two_short_pairs_10511af8(int param_1)

{
  uint32_t uVar1;
  
  if ((*(short *)(param_1 + 0x108) != *(short *)(param_1 + 0x124)) ||
     (uVar1 = 0, *(short *)(param_1 + 0x10a) != *(short *)(param_1 + 0x126))) {
    uVar1 = 1;
  }
  return uVar1;
}
