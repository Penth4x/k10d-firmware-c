/* @k10d decrement_index_and_update_bounds @ 0x104772ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_index_and_update_bounds(int *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 != 0) && ((int)param_2 < 10000)) {
    *(uint32_t *)(param_1[2] + param_2 * 4) = 0;
    *param_1 = *param_1 + -1;
    if (param_2 == *(ushort *)((int)param_1 + 6)) {
      uVar1 = find_last_nonzero_array_element(param_1,param_2);
      *(short *)((int)param_1 + 6) = (short)uVar1;
    }
    if (param_2 == *(ushort *)(param_1 + 1)) {
      uVar1 = find_first_nonzero_entry(param_1,param_2);
      *(short *)(param_1 + 1) = (short)uVar1;
    }
  }
  return;
}
