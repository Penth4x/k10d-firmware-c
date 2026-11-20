/* @k10d process_flag_gated_state_update @ 0x000d11b8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a high bit in a status word and updates adjacent state variables based on the
 *   return value of a helper function.
 * summary:
 *   The function tests bit 7 of DAT_0003ce02. If set, it copies DAT_0003ce36 to
 *   DAT_0003ce30 and adds DAT_0003ce38 to DAT_0003ce34. It then calls
 *   extract_and_pass_nibble; if the result is 0, it either calls tick_state_machine and
 *   clears bit 7 of DAT_0003ce02 (if bit 6 of DAT_0003f281 is clear) or sets bit 0 of
 *   DAT_0003ce05. If the result is non-zero, it calls
 *   clear_state_flags_and_call_initializers and sets bit 1 of DAT_0003ce06. The specific
 *   roles of the DAT globals and callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_flag_gated_state_update(void)

{
  int iVar1;
  
  if ((DAT_0003ce02 & 0x80) != 0) {
    _DAT_0003ce30 = _DAT_0003ce36;
    _DAT_0003ce34 = _DAT_0003ce34 + _DAT_0003ce38;
    iVar1 = extract_and_pass_nibble();
    if (iVar1 == 0) {
      if ((DAT_0003f281 & 0x40) == 0) {
        tick_state_machine();
        DAT_0003ce02 = DAT_0003ce02 & 0x7f;
      }
      else {
        DAT_0003ce05 = DAT_0003ce05 | 1;
      }
    }
    else {
      clear_state_flags_and_call_initializers();
      DAT_0003ce06 = DAT_0003ce06 | 2;
    }
  }
  return;
}
