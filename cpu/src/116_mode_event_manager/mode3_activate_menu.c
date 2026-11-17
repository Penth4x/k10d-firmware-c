/* @k10d mode3_activate_menu @ 0x10431862
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_state_change)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Compares current and previous state values to detect if a change occurred.
 * summary:
 *   The function calls read_first_word_10433098 twice on param_2 and twice on param_2 + 5
 *   to retrieve current and previous state values. It compares the pairs and returns 1 if
 *   any value has changed, otherwise 0. The caller dispatch_mode_transition_1043068c likely
 *   uses this to trigger updates when state transitions occur.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t mode3_activate_menu(void *param_1,uint32_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  
  iVar1 = read_first_word_10433098(param_2);
  iVar2 = read_first_word_10433098(param_2 + 5);
  iVar3 = read_first_word_10433098(param_2);
  uVar4 = 0;
  if ((iVar3 != iVar1) || (iVar1 = read_first_word_10433098(param_2 + 5), iVar1 != iVar2)) {
    uVar4 = 1;
  }
  return uVar4;
}
