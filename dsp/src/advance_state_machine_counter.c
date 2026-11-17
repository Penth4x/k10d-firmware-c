/* @k10d advance_state_machine_counter @ 0x000cca54
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Increments a state counter and shifts a related register based on a comparison with a
 *   threshold table.
 * summary:
 *   The function reads a 2-bit state from DAT_0003ce03 and compares it against a value from
 *   a table at DAT_0003f2cd. If the state is less than the threshold, it increments
 *   DAT_0003ce03 and left-shifts DAT_0003ce24 by 1. It returns 7 in several
 *   success/transition cases and 0 in one failure case. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t advance_state_machine_counter(void)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  uVar1 = DAT_0003ce03 & 3;
  if ((uVar1 != (DAT_0003ce04 & 3)) || (uVar1 == 3)) {
    if (uVar1 == 3) {
      if (_DAT_0000005a == 1) {
        DAT_0003ce03 = DAT_0003ce03 | 0x10;
        uVar2 = 7;
      }
      else if ((DAT_0003ce08 & 4) != 0) {
        uVar2 = 7;
      }
    }
    else {
      if (uVar1 == 2) {
        if ((DAT_0003ce08 & 4) != 0) {
          return 7;
        }
      }
      else if (uVar1 != 1) {
        return 0;
      }
      if (_DAT_0000005a < (byte)(&DAT_0003f2cd)[uVar1]) {
        DAT_0003ce03 = DAT_0003ce03 + 1;
        _DAT_0003ce24 = _DAT_0003ce24 << 1;
        uVar2 = 7;
      }
    }
  }
  return uVar2;
}
