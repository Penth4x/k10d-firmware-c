/* @k10d compute_centered_range_bounds @ 0x10529a10
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_centered_range_bounds(void *param_1,int param_2,int param_3,short *param_4,short *param_5)

{
  uint uVar1;
  
  uVar1 = ((uint)*(ushort *)(param_2 + 0x12) << 8) /
          (((uint)*(ushort *)(param_2 + 0x10) << 8) / (uint)*(ushort *)(param_3 + 0x10)) & 0xfffe;
  *param_5 = (short)uVar1;
  uVar1 = (int)(*(ushort *)(param_3 + 0x12) - uVar1) / 2;
  *param_4 = (short)uVar1;
  if ((uVar1 & 1) != 0) {
    *param_4 = *param_4 + 1;
    *param_5 = *param_5 + -2;
  }
  return;
}
