/* @k10d compute_scaled_offset_sum @ 0x1050a656
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_scaled_offset_sum(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 1) {
    iVar1 = ((int)(uint)*(ushort *)(param_1 + 5) >> 1) * (uint)*(ushort *)(param_1 + 6) + param_1[2]
            + ((int)(uint)*(ushort *)((int)param_1 + 0x16) >> 1);
  }
  else if (*param_1 == 0) {
    iVar1 = (uint)*(ushort *)(param_1 + 5) * (uint)*(ushort *)(param_1 + 6) + param_1[2] +
            (uint)*(ushort *)((int)param_1 + 0x16);
  }
  else {
    iVar1 = ((int)(uint)*(ushort *)(param_1 + 5) >> 1) * ((int)(uint)*(ushort *)(param_1 + 6) >> 1)
            + param_1[2] + ((int)(uint)*(ushort *)((int)param_1 + 0x16) >> 1);
  }
  return iVar1;
}
