/* @k10d iterate_and_store_values @ 0x000d3696
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Iterates through a range of indices, calling helper functions and storing results into
 *   the output buffer.
 * summary:
 *   The function loops from 1 up to the value in DAT_0003cc93. In each iteration, it calls
 *   sum_absolute_diffs_of_two_arrays with an adjusted index. If a specific bit in
 *   DAT_0003cbef is clear, it calls push_value_to_tail_of_list and
 *   update_state_flag_and_dispatch_000d38e4; if update_state_flag_and_dispatch_000d38e4
 *   returns 3, the loop terminates. Otherwise, it stores the result of
 *   sum_absolute_diffs_of_two_arrays into the memory pointed to by param_1 and increments
 *   the pointer. The function returns the last value from
 *   update_state_flag_and_dispatch_000d38e4 or the loop counter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_and_store_values(uint16_t *param_1)

{
  uint uVar1;
  uint16_t uVar2;
  uint uVar3;
  int iVar4;
  int iStack_20;
  int iStack_1c;
  
  uVar3 = 1;
  iVar4 = 2;
  do {
    iStack_20 = (int)DAT_0003cc94 + uVar3;
    DAT_0003cbd4 = DAT_0003cbd4 | 4;
    uVar1 = uVar3;
    do {
      if ((int)uVar1 < 0) {
        DAT_0003cbd4 = DAT_0003cbd4 & 0xfb;
        iStack_1c = iStack_20 + -1;
      }
      else {
        iStack_1c = iStack_20 + 1;
      }
      uVar2 = sum_absolute_diffs_of_two_arrays(iStack_1c);
      if ((DAT_0003cbef & 0x80) == 0) {
        push_value_to_tail_of_list(param_1, __frv_reg_unset(5));
        iVar4 = update_state_flag_and_dispatch_000d38e4(iStack_20);
        if (iVar4 == 3) {
          uVar3 = (uint)DAT_0003cc93;
          break;
        }
      }
      else {
        *param_1 = uVar2;
        param_1 = param_1 + 1;
      }
      uVar1 = -uVar3;
      iStack_20 = (int)DAT_0003cc94 - uVar3;
    } while ((DAT_0003cbd4 & 4) != 0);
    uVar3 = uVar3 + 1;
    if ((int)(uint)DAT_0003cc93 <= (int)uVar3) {
      return iVar4;
    }
  } while( true );
}
