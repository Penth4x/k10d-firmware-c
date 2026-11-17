/* @k10d write_nibble_to_packed_buffer @ 0x1052a134
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_nibble_to_packed_buffer(int param_1,uint param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)(param_1 + 0x10) + param_3 * *(int *)(param_1 + 0xc) +
                   ((param_2 & 0xffff) * 3) / 2);
  if ((param_2 & 1) == 0) {
    *pbVar1 = (byte)((param_4 & 0xff0) >> 4);
    pbVar1[1] = pbVar1[1] & 0xf | (byte)((param_4 & 0xf) << 4);
  }
  else {
    *pbVar1 = *pbVar1 & 0xf0 | (byte)(param_4 >> 8) & 0xf;
    pbVar1[1] = (byte)param_4;
  }
  return;
}
