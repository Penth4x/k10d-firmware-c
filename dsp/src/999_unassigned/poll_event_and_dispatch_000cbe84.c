/* @k10d poll_event_and_dispatch_000cbe84 @ 0x000cbe84
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls an event source in a loop and dispatches the result based on status flags and
 *   parameters.
 * summary:
 *   The function enters a loop calling process_state_flags_and_dispatch_000cc870 to check
 *   for events. It branches to reset_state_flags_and_call_initializers_000cd9de if a
 *   specific bit in DAT_0003ce07 is set, or breaks the loop if DAT_000000ed has bit 6 set
 *   and param_2 is non-zero. Upon breaking, it clears bit 6 of DAT_000000ed and calls
 *   clear_flag_and_call_two_routines_000d1d30 with param_1 if DAT_0003ce09 has bits 6-7
 *   clear. Finally, it stores the result in DAT_0003ce10 and returns it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int poll_event_and_dispatch_000cbe84(uint32_t param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  check_and_clear_flag_bit_000ce8ee();
  while( true ) {
    uVar1 = _DAT_000000d8;
    if ((DAT_0003ce07 & 0x80) != 0) {
      clear_state_flags_and_call_initializers();
      iVar2 = reset_state_flags_and_call_initializers_000cd9de();
      goto LAB_000cbf0a;
    }
    iVar2 = process_state_flags_and_dispatch_000cc870();
    if (iVar2 != 0) goto LAB_000cbf0a;
    if (((DAT_000000ed & 0x40) != 0) && (param_2 != 0)) break;
    if ((param_2 != 2) || ((uVar1 >> 8) + (uint)_DAT_0003cf2c < 0x72)) goto LAB_000cbf0a;
  }
  DAT_000000ed = DAT_000000ed & 0xbf;
  if ((DAT_0003ce09 & 0xc0) == 0) {
    iVar2 = clear_flag_and_call_two_routines_000d1d30(param_1);
    DAT_0003ce08 = DAT_0003ce08 | 1;
  }
  step_pointer_by_flagged_interval(0xffffffff);
LAB_000cbf0a:
  DAT_0003ce10 = (char)iVar2;
  return iVar2;
}
