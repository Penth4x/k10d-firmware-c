/* @k10d dispatch_state_transition_000d314e @ 0x000d314e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Checks a state index and flag bits, then calls one of two handlers based on the current
 *   state value.
 * summary:
 *   Reads a state counter at DAT_0003c12a and validates it is less than 0xc. Copies three
 *   bytes from DAT_0003c104-106 to DAT_0003c115-117 and clears DAT_0003c118. If specific
 *   bits in DAT_0003c107 and DAT_0003f258 are not set, it branches to
 *   update_mode_dependent_globals if the state is 0, otherwise to
 *   branch_on_mode_code_and_value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_transition_000d314e(void)

{
  if ((_DAT_0003c12a != 0) && (DAT_0003c12a < 0xc)) {
    DAT_0003c117 = DAT_0003c106;
    DAT_0003c116 = DAT_0003c105;
    DAT_0003c115 = DAT_0003c104;
    DAT_0003c118 = 0;
    if (((DAT_0003c107 & 0x30) != 0x10) && ((DAT_0003f258 & 0x80) == 0)) {
      if (DAT_0003c12a == 0) {
        update_mode_dependent_globals();
      }
      else {
        branch_on_mode_code_and_value();
      }
    }
  }
  return;
}
