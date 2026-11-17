/* @k10d decrement_timer_and_rearm @ 0x10475852
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears a timer slot, decrements a count, and re-arms two timeout values if they match
 *   the cleared slot.
 * summary:
 *   Calls subtract_100_from_param to get an index (0-899). If valid, it zeros the entry at
 *   that index in the array pointed to by param_1 and decrements the counter at param_1[6].
 *   It then checks if the index matches the values stored at offsets 0x14 and 0x1e; if so,
 *   it calls find_first_nonzero_in_table or find_last_nonzero_index respectively to compute
 *   a new value, subtracts 100, and stores the result back to the offset. The specific
 *   subsystem (e.g., AF, AE, timer) is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_timer_and_rearm(int *param_1,uint32_t param_2)

{
  int iVar1;
  short sVar2;
  
  iVar1 = subtract_100_from_param(__frv_reg_unset(4), __frv_reg_unset(5));
  if ((-1 < iVar1) && (iVar1 < 900)) {
    *(uint32_t *)(*param_1 + iVar1 * 4) = 0;
    param_1[6] = param_1[6] + -1;
    if (iVar1 == *(short *)(param_1 + 7)) {
      sVar2 = find_first_nonzero_in_table(param_1,param_2);
      *(short *)(param_1 + 7) = sVar2 + -100;
    }
    if (iVar1 == *(short *)((int)param_1 + 0x1e)) {
      sVar2 = find_last_nonzero_index(param_1,param_2);
      *(short *)((int)param_1 + 0x1e) = sVar2 + -100;
    }
  }
  return;
}
