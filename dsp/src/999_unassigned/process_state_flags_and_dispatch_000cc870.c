/* @k10d process_state_flags_and_dispatch_000cc870 @ 0x000cc870
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a set of global flag bytes and conditionally calls helper functions while
 *   updating state bits.
 * summary:
 *   The function reads several global variables (DAT_0003ce01 through DAT_0003ce05) to
 *   determine control flow. If specific bit conditions are met, it calls
 *   set_flag_and_call_helper_000d014c, update_timer_state_flags_000d2222, and
 *   clear_state_flags_and_call_initializers. It then modifies bits in DAT_0003ce02 and
 *   DAT_0003ce04 based on the current state, returning an integer code (0, 1, 8, or 0xb)
 *   indicating the outcome.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_state_flags_and_dispatch_000cc870(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((DAT_0003ce04 & 0x80) != 0) {
    if ((DAT_0003ce05 & 1) == 0) {
      iVar1 = set_flag_and_call_helper_000d014c();
    }
    if ((iVar1 == 0) && ((DAT_0003ce01 & 1) == 0)) {
      update_timer_state_flags_000d2222();
      clear_state_flags_and_call_initializers();
      if ((DAT_0003ce02 & 0x40) == 0) {
        DAT_0003ce04 = DAT_0003ce04 | 8;
        iVar1 = 1;
      }
      else {
        iVar1 = 0xb;
        if ((DAT_0003ce02 & 0x20) == 0) {
          if ((DAT_0003ce02 & 0x10) == 0) {
            iVar1 = 8;
          }
          else {
            DAT_0003ce02 = DAT_0003ce02 | 1;
          }
        }
        else {
          DAT_0003ce02 = DAT_0003ce02 | 2;
        }
      }
    }
  }
  return iVar1;
}
