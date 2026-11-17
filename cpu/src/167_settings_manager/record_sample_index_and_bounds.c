/* @k10d record_sample_index_and_bounds @ 0x10477278
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104772a4) overlaps instruction at (ram,0x104772a2)
    */

void record_sample_index_and_bounds(int *param_1,int param_2,uint32_t param_3)

{
  if ((param_2 != 0) && (param_2 < 10000)) {
    *(uint32_t *)(param_1[2] + param_2 * 4) = param_3;
    *param_1 = *param_1 + 1;
    if ((*(ushort *)(param_1 + 1) == 0) || (param_2 < (int)(uint)*(ushort *)(param_1 + 1))) {
      *(short *)(param_1 + 1) = (short)param_2;
    }
    if ((*(ushort *)((int)param_1 + 6) == 0) || ((int)(uint)*(ushort *)((int)param_1 + 6) < param_2)
       ) {
      *(short *)((int)param_1 + 6) = (short)param_2;
    }
  }
  return;
}
