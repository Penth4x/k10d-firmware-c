/* @k10d iterate_over_array_count @ 0x1047e308
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Loops from index 0 to param_1[1]-1, calling write_if_check_passes_1047e270 with the
 *   array, index, and param_2.
 * summary:
 *   Reads a count from param_1[1] and, if positive, iterates that many times invoking
 *   write_if_check_passes_1047e270 with the base pointer, the current index, and the second
 *   argument. No other side effects are visible in this function. The caller is
 *   process_event_and_update_state_103652c6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_over_array_count(int *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      write_if_check_passes_1047e270(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return;
}
